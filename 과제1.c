#include <stdio.h>

int main(void)
{
	float a, b, max, min, sum;
	printf(" 1 ��° �Ǽ��� �Է��Ͻÿ�. ");
	scanf_s("%f", &a);
	sum = a;
	max = a;
	min = a;
	for (int i = 2; i < 6; i++)
	{
		printf("%d��° �Ǽ��� �Է��Ͻÿ�. ", i);
		scanf_s("%f", &b);
		max = (max > b) ? max : b;
		min = (min > b) ? b : min;
		sum += b;
	}
	printf("����� %f�Դϴ�.\n�ִ��� %f�Դϴ�.\n�ּڰ��� %f�Դϴ�.", sum / 5, max, min);
}