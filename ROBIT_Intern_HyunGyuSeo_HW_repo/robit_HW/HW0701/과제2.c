#include <stdio.h>

int main(void)
{
	unsigned int n, a=0, b=1, sum; //��� �� �߿� ���� ��� ������ ���� �ڷ����� unsigned int�� ����Ͽ� ������ �� n�� Ŀ�� �� �ֵ��� �ߴ�.
	printf("n �Է�: ");
	scanf_s("%d", &n);
	for (int i = 0; i < n-1; i++) {
		sum = a + b;//a�� b�� ���� ���� sum���� �������� �� b�� ���� a��, ���ߴ� ���� b�� �Ű��.
		a = b;
		b = sum;
	}
	printf("n��° �Ǻ���ġ ��: %d", a);//n-1�� �ݺ��ϸ� a�� ���� n��° �Ǻ���ġ ���� �ȴ�.
}