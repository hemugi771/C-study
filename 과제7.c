#include <stdio.h>

int main(void)
{
	int n, r, N = 1, R = 1, NR = 1, NR1 = 1, nr = 1;
	printf("n�� r �Է�(���� ����) : ");
	scanf_s("%d%d", &n, &r);
	for (int i = n; i > 0; i--) {
		N *= i;//N = n!
	}
	for (int i = r; i > 0; i--) {
		R *= i;//R = r!
	}
	for (int i = n-r; i > 0; i--) {
		NR *= i;//NR = (n-r)!
	}
	for (int i = n+r-1; i > 0; i--) {
		NR1 *= i;//NR1 = (n+r-1)!
	}
	for (int i = 0; i < r; i++) {
		nr *= n;
	}
	printf("���� = %d\n", N/NR);
	printf("�ߺ����� = %d\n", nr);
	printf("���� = %d\n", N/(NR*R));
	printf("�ߺ����� = %d\n", NR1/(N*R/n));//n!/n = (n-1)!
}
