#include <stdio.h>

int main(void)
{
	int a;
	printf("���� �Է��ϼ���.");
	scanf_s("%d", &a);
	for (int i = 1; i <= a; i++) {//������
		for (int j = 1; j < 2 * a; j++) {//������
			if (i == a) {//�ٴ�
				printf("*");
			}
			else {//�ﰢ�� ����
				if (j==a-(i-1)||j==a+(i-1)) {
					printf("*");
				}
				else {
					printf(" ");
				}
			}
		}
		printf("\n");//�� ���� ������ �ٹٲ�
	}
}