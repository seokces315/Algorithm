#include <stdio.h>
#define N 6

// 버블정렬 알고리즘
int bubble_sort(int* arr, int n) {

	// 지역변수 선언
	int tmp;

	// 중첩 for문
	// 반복을 돌며 정렬
	for (int i = n - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			// 오름차순 정렬이 아니라면 swap
			if (arr[j] > arr[j + 1]) {
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}

	return 0;

}

int main(void) {

	// 배열 선언
	int arr[N] = { 2, 4, 6, 5, 3, 1 };

	// 버블 정렬을 활용해 배열 정렬하기
	bubble_sort(arr, N);

	// 결과 출력
	printf("[ ");
	for (int i = 0; i < N; i++) {
		printf("%d ", arr[i]);
	}
	printf("]\n");

	return 0;

}
