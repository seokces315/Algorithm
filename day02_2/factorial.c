#include <stdio.h>

// �Լ� ����
int factorial(int n) {

	// 0�� �ԷµǸ� 1�� ����
	if (n == 0)
		return 1;

	// ��� ȣ�� Ȱ��
	return n * factorial(n - 1);

}

int main(void) {

	// �Լ� ȣ�� �� ���
	printf("%d\n", factorial(5));

	return 0;

}
