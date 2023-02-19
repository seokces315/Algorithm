#include <stdio.h>

// 함수 정의
void recursive_func(int n) {

	// 0이 입력되면 종료
	if (n == 0) {
		printf("\n"); // 줄바꿈
		return;
	}

	// 현재 호출의 n값 출력
	printf("before call -> %d\n", n);
	
	// 재귀 호출
	recursive_func(n - 1);

	// 현재 호출의 n값 출력
	printf("after call -> %d\n", n);

}

int main(void) {

	// 함수 호출
	recursive_func(5);

	return 0;

}
