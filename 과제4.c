#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	printf("Input : ");
	double num1, num2, res;
	char oper;
	scanf("%lf %c %lf", &num1, &oper, &num2);//����� �����ڿ� ���ڸ� �����Ͽ� �Է¹޴´�.
	switch (oper) {//�������� ������ ���� ����,����,����,������,�ŵ������� �����Ѵ�.
	case '+':
		res = num1 + num2;
		break;
	case '-':
		res = num1 - num2;
		break;
	case '*':
		res = num1 * num2;
		break;
	case '/':
		if (num2 == 0) { break; }
		res = num1 / num2;
		break;
	default:
		res = 1;// ^ �翷�� �Ǽ����� �� �� ���� �ؼ� ���� ��������
		for (int i = 0; i < num2; i++) {
			res *= num1;
		}
	}
	printf("%.2lf %c %.2lf = %.2lf",num1, oper, num2, res);//������ ����ó�� �Ҽ��� �ι�° �ڸ����� ��Ÿ���� �Ͽ���
}
