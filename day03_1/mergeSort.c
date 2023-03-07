#include <stdio.h>
#define N 8

// ���� �迭 ����
int tmp[N];

void merge_sort(int*, int, int);
void merge(int*, int, int, int);

// �պ� ���� �˰���
void merge_sort(int* arr, int left, int right) {

	// ���� ����
	int mid;

	// �Լ� ���� ����
	if (left == right)
		return;

	// ���� ���޵� �迭�� �߽� �ε��� ���ϱ�
	mid = (left + right) / 2;

	// ��� ȣ��
	// Divide & Conquer ����
	merge_sort(arr, left, mid);		 // Divide(left ~ mid)
	merge_sort(arr, mid + 1, right); // Divide(mid + 1 ~ right)
	merge(arr, left, mid, right);	 // Conquer

}

// Divide -> 'Conquer' �˰���
void merge(int* arr, int left, int mid, int right) {

	// ���� ����
	int lIdx = left, rIdx = mid + 1, tIdx = left, cIdx;

	// �ݺ����� ���� �� ����
	// Ż�� ���� ���
	while ((lIdx <= mid) && (rIdx <= right)) {
		// ���� ���� �ӽ� �迭�� ���� ��ġ�� ����
		// �ε��� ������Ű��
		if (arr[lIdx] <= arr[rIdx]) // ��ȣ ���� X
			tmp[tIdx++] = arr[lIdx++];
		else
			tmp[tIdx++] = arr[rIdx++];
	}

	// �ܿ� �迭�� �ӽ� �迭�� �ű��
	if (lIdx > mid) {
		// ���� Ż�� ���� Ȱ���ؼ� �ݺ��ϱ�
		for (cIdx = rIdx; cIdx <= right; cIdx++) {
			tmp[tIdx++] = arr[cIdx];	
		}
	}
	else { // rIdx > right
		// ���� Ż�� ���� Ȱ���ؼ� �ݺ��ϱ�
		for (cIdx = lIdx; cIdx <= mid; cIdx++) {
			tmp[tIdx++] = arr[cIdx];
		}
	}

	// �ӽ� �迭�� �����͸� ���� �迭�� ����
	for (tIdx = left; tIdx <= right; tIdx++) {
		arr[tIdx] = tmp[tIdx];
	}

	// ������� ���ĵ� �κ� ���
	printf("SORTED : ");
	for (int i = 0; i <= right; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n"); // �ٹٲ�

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

	// �պ� ������ Ȱ���� �迭 �����ϱ�
	printf("----------------------------------------\n");
	merge_sort(arr, 0, N - 1);
	printf("----------------------------------------\n");

	// ���� ��� ���
	printf("Sorted array is [ ");
	for (int i = 0; i < N; i++) {
		printf("%d ", arr[i]);
	}
	printf("]\n");

	return 0;

}
