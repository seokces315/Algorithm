#include <stdio.h>
#define N 6

// ���� ���� �˰���
int insertion_sort(int* arr, int n) {

	// �������� ����
	int tmp;

	// ��ø �ݺ���
	// �ݺ��� ���� ����
	for (int i = 1; i < n; i++) {
		tmp = arr[i]; // ���� �ݺ��� ���ذ� ����

		// ���ذ��� �� ������ swap
		int j = i;
		while ((j > 0) && (tmp < arr[j - 1])) { // ��ġ�� �˸����� Ż��
			arr[j] = arr[j - 1];
			arr[j - 1] = tmp;
			j--; // ���� �ݺ� �غ�
		}
	}

}

int main(void) {

	// �迭 ����
	int arr[N] = { 5, 4, 6, 1, 3, 2 };

	// ���� ������ Ȱ���� �迭 �����ϱ�
	insertion_sort(arr, N);

	// ��� ���
	printf("[ ");
	for (int i = 0; i < N; i++) {
		printf("%d ", arr[i]);
	}
	printf("]\n");

	return 0;

}
