#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int arr[8];
	printf("�Է�\n\n");
	for (int i = 0;i < 8;i++) {
		printf("%d : ", i);
		scanf("%d", &arr[i]);
		printf("\n");
	}
	int i = 7;
	while (i >= 0) {
		int max = 0;
		for (int l = 0;l < 8; l++) {
			printf("%d ", arr[l]);
		}//19��° ��: �̹� ������ �Ǿ������� �ݺ��ؼ� ��µǴ� ������ ���� ���� ������ �Ǿ����� �ݺ����� ����
		if (arr[0] <= arr[1] && arr[1] <= arr[2] && arr[3] <= arr[4] && arr[4] <= arr[5] && arr[5] <= arr[6] && arr[6] <= arr[7]) { break; }
		for (int j = 0;j < i;j++) {// ���� ū ���� ���� max���� �ֱ�, ������ ���� �ڸ��� �ű��, max�� �������� �ֱ�
			if (arr[j] > arr[i]) {
				max = arr[j];
				arr[j] = arr[i];
				arr[i] = max;
			}
		}
		printf("\n");
		i--;
	}
	printf("\n���\n\n");
	for (int l = 0;l < 8; l++) {
		printf("%d: %d\n", l, arr[l]);
	}
}