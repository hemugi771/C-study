#include <stdio.h>

int main(void)
{
	int year, a = 0;
	printf("�⵵�� �Է��ϼ��� : ");
	scanf_s("%d", &year);
	if (year % 4 == 0) {
		a = 1;
		if (year % 100 == 0) {
			a = 0;
			if (year % 400 == 0)
			{
				a = 1;
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