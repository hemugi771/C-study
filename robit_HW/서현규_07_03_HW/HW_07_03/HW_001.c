#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int min, max, count=0, nNumcnt = 0;
	int num[10000];
	printf("min :");
	scanf("%d", &min);
	printf("max :");
	scanf("%d", &max);

	for (int i = min; i <= max; i++) {//min���� max ������ ���� ������ŭ �ݺ�
		//min���� max ������ ����(i)���� �ڿ���(2���� 1�� ������)�� �������� ���� �������� 0�� �ƴϸ� �迭���� ����ְ� ī��Ʈ�� �ϴ� �ڵ�
		for (int nNum = 2;nNum < max; nNum++) {
			if (i % (nNum * nNum) != 0) {//� �������� ���� �������� ��� 0�� �ƴϾ��ٸ�
				nNumcnt++;//�� Ƚ���� ����
				if (nNumcnt == max-2) {//��� �������� ���� �������� 0�� �ƴϾ��ٸ�
					num[count] = i;//�����������̹Ƿ� �迭�� �ְ�  count�� 1��ŭ ���Ѵ�
					count++;
				}
			}
		}
		nNumcnt = 0;//���� ���ڸ� �����ϱ� ���� �������� ���� �������� 0�� �ƴ� Ƚ���� �� ���� �ʱ�ȭ�����ش�
	}

	printf("���� ������ : %d��\n", count);//ī��Ʈ�� ���� �迭�� ����Ѵ�
	for (int i = 0; i < count;i++) {
		printf("%d ", num[i]);
	}
	
}

