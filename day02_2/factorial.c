#include <stdio.h>

// 함수 정의
int factorial(int n) {

	// 0이 입력되면 1을 리턴
	if (n == 0)
		return 1;

	// 재귀 호출 활용
	return n * factorial(n - 1);

}

int main(void) {

	// 함수 호출 후 출력
	printf("%d\n", factorial(5));

	return 0;

}
