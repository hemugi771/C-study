#include <stdio.h>

int main(void)
{
	int year, a = 0;
	printf("�⵵�� �Է��ϼ��� : ");
	scanf_s("%d", &year);
	if (year % 4 == 0) {//4�� ����̸�
		a = 1;//����
		if (year % 100 == 0) {//4�� ����̸鼭 100�� ����̸�
			a = 0;//���� �ƴ�
			if (year % 400 == 0)//4�� ����̸鼭 100�� ����̸鼭 400�� ����̸�
			{
				a = 1;//����
			}
		}
	}
	if (a == 0) {
		printf("���� �ƴ�");
	}
	else{
		printf("����");
	}
}