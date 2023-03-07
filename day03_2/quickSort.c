#include <stdio.h>
#define N 8

// �� ���� �˰���
void quick_sort(int* arr, int left, int right) {

	// ��ǥ�� pivot - 2����(0, mid)
	// ��� ���Ҹ� Ȱ���ϱ�
	int lIdx = left;
	int rIdx = right;
	int pivot = arr[(lIdx + rIdx) / 2];
	int tmp;

	// �� �ε����� �����ϱ� ������ ���� �ݺ�
	while (lIdx < rIdx) {

		// �ǹ� �������� ���ĵ� ����� �ε��� ã��
		while (arr[lIdx] < pivot) {
			lIdx++;
		}
		// �ǹ� �������� ���ĵ� ����� �ε��� ã��
		while (arr[rIdx] > pivot) {
			rIdx--;
		}

		// �ε����� �ش��ϴ� ��ҳ��� ��ġ ��ȯ
		tmp = arr[lIdx];
		arr[lIdx++] = arr[rIdx];
		arr[rIdx--] = tmp;

		// ���� �ݺ����� ���ĵ� �迭 ���
		printf("Current : [ ");
		for (int i = 0; i < N; i++) {
			printf("%d ", arr[i]);
		}
		printf("]\n");

	}

	// �� �ε��� ��� pivot�� ���� ��
	// ���ȣ���� ���� ���� �۾�
	if (lIdx == rIdx) {
		lIdx++;
		rIdx--;
	}

	// Divide and Conquer
	// �����ؼ� ���ȣ��
	if (left < rIdx) 
		quick_sort(arr, left, rIdx);
	if (right > lIdx) 
		quick_sort(arr, lIdx, right);

}

int main(void) {

	// �迭 ����
	int arr[N] = { 7, 8, 5, 4, 6, 1, 3, 2 };
	
	// ���� �� ���� �迭 ���
	printf("Given array is [ ");
	for (int i = 0; i < N; i++) {
		printf("%d ", arr[i]);
	}
	printf("]\n");

	// �� ������ Ȱ���� �迭 �����ϱ�
	printf("----------------------------------------\n");
	quick_sort(arr, 0, N-1);
	printf("----------------------------------------\n");

	// ���� ��� ���
	printf("Sorted array is [ ");
	for (int i = 0; i < N; i++) {
		printf("%d ", arr[i]);
	}
	printf("]\n");

	return 0;

}
