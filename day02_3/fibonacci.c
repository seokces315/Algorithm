#include <stdio.h>

// �Լ� ����
int fibonacci(int n) {

	// n = 0 -> 0
	// n = 1 -> 1
	if (n < 2) {
		return n;
	}

	// ��� ȣ�� Ȱ��
	return fibonacci(n - 2) + fibonacci(n - 1);

}

int main(void) {

	// for���� Ȱ���� ��� ���
	for (int i = 0; i < 10; i++) {
		// �Լ� ȣ��
		printf("%d ", fibonacci(i));
	}

	printf("\n"); // �ٹٲ�

	return 0;

}
