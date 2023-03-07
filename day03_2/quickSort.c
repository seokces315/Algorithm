#include <stdio.h>
#define N 8

// 퀵 정렬 알고리즘
void quick_sort(int* arr, int left, int right) {

	// 대표적 pivot - 2가지(0, mid)
	// 가운데 원소를 활용하기
	int lIdx = left;
	int rIdx = right;
	int pivot = arr[(lIdx + rIdx) / 2];
	int tmp;

	// 두 인덱스가 교차하기 전까지 정렬 반복
	while (lIdx < rIdx) {

		// 피벗 우측으로 정렬될 요소의 인덱스 찾기
		while (arr[lIdx] < pivot) {
			lIdx++;
		}
		// 피벗 좌측으로 정렬될 요소의 인덱스 찾기
		while (arr[rIdx] > pivot) {
			rIdx--;
		}

		// 인덱스에 해당하는 요소끼리 위치 교환
		tmp = arr[lIdx];
		arr[lIdx++] = arr[rIdx];
		arr[rIdx--] = tmp;

		// 현재 반복으로 정렬된 배열 출력
		printf("Current : [ ");
		for (int i = 0; i < N; i++) {
			printf("%d ", arr[i]);
		}
		printf("]\n");

	}

	// 두 인덱스 모두 pivot과 같을 때
	// 재귀호출을 위한 조정 작업
	if (lIdx == rIdx) {
		lIdx++;
		rIdx--;
	}

	// Divide and Conquer
	// 분할해서 재귀호출
	if (left < rIdx) 
		quick_sort(arr, left, rIdx);
	if (right > lIdx) 
		quick_sort(arr, lIdx, right);

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

	// 퀵 정렬을 활용해 배열 정렬하기
	printf("----------------------------------------\n");
	quick_sort(arr, 0, N-1);
	printf("----------------------------------------\n");

	// 최종 결과 출력
	printf("Sorted array is [ ");
	for (int i = 0; i < N; i++) {
		printf("%d ", arr[i]);
	}
	printf("]\n");

	return 0;

}
