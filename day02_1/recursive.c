#include <stdio.h>

// �Լ� ����
void recursive_func(int n) {

	// 0�� �ԷµǸ� ����
	if (n == 0) {
		printf("\n"); // �ٹٲ�
		return;
	}

	// ���� ȣ���� n�� ���
	printf("before call -> %d\n", n);
	
	// ��� ȣ��
	recursive_func(n - 1);

	// ���� ȣ���� n�� ���
	printf("after call -> %d\n", n);

}

int main(void) {

	// �Լ� ȣ��
	recursive_func(5);

	return 0;

}
