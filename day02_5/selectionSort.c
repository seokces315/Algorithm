#include <stdio.h>
#define N 6

// 선택 정렬 알고리즘
int selection_sort(int* arr, int n) {

	// 지역변수 선언
	int idx;
	int tmp;

	// 중첩 for문
	// 반복을 돌며 정렬
	for (int i = 0; i < n - 1; i++) {
		idx = i; // idx 초기화

		for (int j = i + 1; j < n; j++) {
			// 원소의 크기에 따라 idx 갱신
			if (arr[j] < arr[idx]) {
				idx = j;
			}
		}

		// 가장 작은 원소의 위치를 변경해줌
		tmp = arr[idx];
		arr[idx] = arr[i];
		arr[i] = tmp;
	}

	return 0;

}

int main(void) {

	// 배열 선언
	int arr[N] = { 5, 4, 6, 1, 3, 2 };

	// 선택 정렬을 활용해 배열 정렬하기
	selection_sort(arr, N);

	// 결과 출력
	printf("[ ");
	for (int i = 0; i < N; i++) {
		printf("%d ", arr[i]);
	}
	printf("]\n");

	return 0;

}
