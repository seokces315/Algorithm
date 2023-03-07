#include <stdio.h>
#define N 8

// 전역 배열 선언
int tmp[N];

void merge_sort(int*, int, int);
void merge(int*, int, int, int);

// 합병 정렬 알고리즘
void merge_sort(int* arr, int left, int right) {

	// 지역 변수
	int mid;

	// 함수 종료 조건
	if (left == right)
		return;

	// 현재 전달된 배열의 중심 인덱스 구하기
	mid = (left + right) / 2;

	// 재귀 호출
	// Divide & Conquer 컨셉
	merge_sort(arr, left, mid);		 // Divide(left ~ mid)
	merge_sort(arr, mid + 1, right); // Divide(mid + 1 ~ right)
	merge(arr, left, mid, right);	 // Conquer

}

// Divide -> 'Conquer' 알고리즘
void merge(int* arr, int left, int mid, int right) {

	// 지역 변수
	int lIdx = left, rIdx = mid + 1, tIdx = left, cIdx;

	// 반복문을 통해 비교 정렬
	// 탈출 조건 명시
	while ((lIdx <= mid) && (rIdx <= right)) {
		// 작은 수를 임시 배열의 현재 위치에 저장
		// 인덱스 증가시키기
		if (arr[lIdx] <= arr[rIdx]) // 등호 영향 X
			tmp[tIdx++] = arr[lIdx++];
		else
			tmp[tIdx++] = arr[rIdx++];
	}

	// 잔여 배열을 임시 배열로 옮기기
	if (lIdx > mid) {
		// 남은 탈출 조건 활용해서 반복하기
		for (cIdx = rIdx; cIdx <= right; cIdx++) {
			tmp[tIdx++] = arr[cIdx];	
		}
	}
	else { // rIdx > right
		// 남은 탈출 조건 활용해서 반복하기
		for (cIdx = lIdx; cIdx <= mid; cIdx++) {
			tmp[tIdx++] = arr[cIdx];
		}
	}

	// 임시 배열의 데이터를 원시 배열에 전달
	for (tIdx = left; tIdx <= right; tIdx++) {
		arr[tIdx] = tmp[tIdx];
	}

	// 현재까지 정렬된 부분 출력
	printf("SORTED : ");
	for (int i = 0; i <= right; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n"); // 줄바꿈

}

int main(void) {

	// 배열 선언
	int arr[N] = { 7, 8, 5, 4, 6, 1, 3, 2 };

	// 정렬 전 원시 배열 출력
	printf("Given array is [ ");
	for (int i = 0; i < N; i++) {
		printf("%d ", arr[i]);
	}
	printf("]\n");

	// 합병 정렬을 활용해 배열 정렬하기
	printf("----------------------------------------\n");
	merge_sort(arr, 0, N - 1);
	printf("----------------------------------------\n");

	// 최종 결과 출력
	printf("Sorted array is [ ");
	for (int i = 0; i < N; i++) {
		printf("%d ", arr[i]);
	}
	printf("]\n");

	return 0;

}
