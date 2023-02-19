#include <stdio.h>
#define N 6

// �������� �˰���
int bubble_sort(int* arr, int n) {

	// �������� ����
	int tmp;

	// ��ø for��
	// �ݺ��� ���� ����
	for (int i = n - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			// �������� ������ �ƴ϶�� swap
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

	// �迭 ����
	int arr[N] = { 2, 4, 6, 5, 3, 1 };

	// ���� ������ Ȱ���� �迭 �����ϱ�
	bubble_sort(arr, N);

	// ��� ���
	printf("[ ");
	for (int i = 0; i < N; i++) {
		printf("%d ", arr[i]);
	}
	printf("]\n");

	return 0;

}
