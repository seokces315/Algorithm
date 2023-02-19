#include <stdio.h>
#define N 6

// ���� ���� �˰���
int selection_sort(int* arr, int n) {

	// �������� ����
	int idx;
	int tmp;

	// ��ø for��
	// �ݺ��� ���� ����
	for (int i = 0; i < n - 1; i++) {
		idx = i; // idx �ʱ�ȭ

		for (int j = i + 1; j < n; j++) {
			// ������ ũ�⿡ ���� idx ����
			if (arr[j] < arr[idx]) {
				idx = j;
			}
		}

		// ���� ���� ������ ��ġ�� ��������
		tmp = arr[idx];
		arr[idx] = arr[i];
		arr[i] = tmp;
	}

	return 0;

}

int main(void) {

	// �迭 ����
	int arr[N] = { 5, 4, 6, 1, 3, 2 };

	// ���� ������ Ȱ���� �迭 �����ϱ�
	selection_sort(arr, N);

	// ��� ���
	printf("[ ");
	for (int i = 0; i < N; i++) {
		printf("%d ", arr[i]);
	}
	printf("]\n");

	return 0;

}
