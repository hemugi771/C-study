#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int type1(int A);//������ Ÿ�Ժ��� ����� ����ϴ� �Լ� ����
int type2(int A);
int type3(int A);
int type4(int A);


int main() {
	int a, b;
	printf("������� ������ �Է��Ͻÿ�.");
	scanf("%d%d", &a, &b);
	switch (b) {//switch case���� Ȱ���Ͽ� �Է¹��� Ÿ�Ժ��� �˸��� �Լ��� ����ϵ��� ��
	case 1:
		a = type1(a);
	case 2:
		a = type2(a);
	case 3:
		a = type3(a);
	case 4:
		a = type4(a);
	}
}
int type1(int A){
	for (int i = 1; i <= A; i++) {//������
		for (int j = 1; j <= A/2+1; j++) {//������
			if (i<=A/2+1) {//ù° �ٺ��� �������
				if (j<=i) {
					printf("*");
				}
				else {
					printf(" ");
				}
			}
			else {//����� ���� ������ �� ������
				if (j<=A-i+1) {
					printf("*");
				}
				else {
					printf(" ");
				}
			}
		}
		printf("\n");//�� ���� ������ �ٹٲ�
	}
	return 0;
}

int type2(int A) {
	for (int i = 1; i <= A; i++) {//������
		for (int j = 1; j <= A / 2 + 1; j++) {//������
			if (i<=A/2+1) {//ù° �ٺ��� �������
				if (j>A/2-i+1) {
					printf("*");
				}
				else {
					printf(" ");
				}
			}
			else {//����� ���� ������ �� ������
				if (j>=A/2-A+i+1) {
					printf("*");
				}
				else {
					printf(" ");
				}
			}
		}
		printf("\n");//�� ���� ������ �ٹٲ�
	}
	return 0;
}

int type3(int A){
	for (int i = 1; i <= A; i++) {//������
		for (int j = 1; j <= A; j++) {//������
			if (i<=A/2+1) {//ù° �ٺ��� �������
				if (j>=i&&j<=A-i+1) {
					printf("*");
				}
				else {
					printf(" ");
				}
			}
			else {//����� ���� ������ �� ������
				if (j<=i&&j>=A-i+1) {
					printf("*");
				}
				else {
					printf(" ");
				}
			}
		}
		printf("\n");//�� ���� ������ �ٹٲ�
	}
	return 0;
}

int type4(int A) {
	for (int i = 1; i <= A; i++) {//������
		for (int j = 1; j <= A; j++) {//������
			if (i<=A/2+1) {//ù° �ٺ��� �������
				if (j>=i&&j<=A/2+1) {
					printf("*");
				}
				else {
					printf(" ");
				}
			}
			else {//����� ���� ������ �� ������
				if (j<=i&&j>=A/2+1) {
					printf("*");
				}
				else {
					printf(" ");
				}
			}
		}
		printf("\n");//�� ���� ������ �ٹٲ�
	}
	return 0;
}