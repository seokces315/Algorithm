#include <stdio.h>
#define N 6

// 삽입 정렬 알고리즘
int insertion_sort(int* arr, int n) {

	// 지역변수 선언
	int tmp;

	// 중첩 반복문
	// 반복을 돌며 정렬
	for (int i = 1; i < n; i++) {
		tmp = arr[i]; // 현재 반복의 기준값 저장

		// 기준값이 더 작으면 swap
		int j = i;
		while ((j > 0) && (tmp < arr[j - 1])) { // 위치가 알맞으면 탈출
			arr[j] = arr[j - 1];
			arr[j - 1] = tmp;
			j--; // 다음 반복 준비
		}
	}

}

int main(void) {

	// 배열 선언
	int arr[N] = { 5, 4, 6, 1, 3, 2 };

	// 삽입 정렬을 활용해 배열 정렬하기
	insertion_sort(arr, N);

	// 결과 출력
	printf("[ ");
	for (int i = 0; i < N; i++) {
		printf("%d ", arr[i]);
	}
	printf("]\n");

	return 0;

}
