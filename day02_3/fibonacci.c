#include <stdio.h>

// 함수 정의
int fibonacci(int n) {

	// n = 0 -> 0
	// n = 1 -> 1
	if (n < 2) {
		return n;
	}

	// 재귀 호출 활용
	return fibonacci(n - 2) + fibonacci(n - 1);

}

int main(void) {

	// for문을 활용해 결과 출력
	for (int i = 0; i < 10; i++) {
		// 함수 호출
		printf("%d ", fibonacci(i));
	}

	printf("\n"); // 줄바꿈

	return 0;

}
