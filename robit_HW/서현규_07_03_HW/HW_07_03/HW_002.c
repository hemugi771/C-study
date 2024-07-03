#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int ziphap[20] = {0, };//�迭�� ��� ���� 0�� ����

int add(int x);
int remove(int x);
int check(int x);
int toggle(int x);
int all(int x);
int empty(int x);

int main() {
	int x;
	int size;
	char command[10];
	printf("������ �����ϼ���. (1 <= x <= 200\n");
	printf("add X\nremove X\n check X\ntoggle X\nall 0\nempty 0\n\n");
	while (1) {//���� ����
		printf("input : ");
		scanf("%s %d", &command, &x);

		if (!strcmp(command, "add")) {//command�� �Է��� ���� �����ؼ� �Լ��� �����ϴ� �ڵ�
			x = add(x);
		}
		if (!strcmp(command, "remove")) {
			x = remove(x);
		}
		if (!strcmp(command, "check")) {
			x = check(x);
		}
		if (!strcmp(command, "toggle")) {
			x = toggle(x);
		}
		if (!strcmp(command, "all")) {
			x = all(x);
		}
		if (!strcmp(command, "empty")) {
			x = empty(x);
		}

		printf("���� : {");//���
		for (int n = 0; n < 20; n++) {//x�� ������ 0�� ���Ե��� �ʴ� ���� �̿��ؼ� 0�� ��µ��� �ʰ� �ڵ带 «
			if (ziphap[n] != 0) {
				printf("%d, ", ziphap[n]);
			}
		}
		printf("}\n\n");
	}
}

int add(int x){//add�Լ�
	for (int i = 0;i < 20;i++) {
		if (ziphap[i] == 0||ziphap[i]== x) {//���տ� ��ĭ�� �ְų� x�� ���� ���� �ִٸ�
			ziphap[i] = x;//�ű⿡�� x ������ Ż��
			break;
		}
	}
}
int remove(int x){//remove�Լ�
	for (int i = 0;i < 20;i++) {
		if (ziphap[i] == x) {//x�� ���� ���� ������ ���ֱ�
			ziphap[i] = 0;
			for (int j = 0;j < i + 1;j++) {//�� �ں��� �迭�� ��� ĭ�� �� ĭ ����
				ziphap[i + j] = ziphap[i + j + 1];
				ziphap[i + j + 1] = 0;
			}
			break;
		}
	}
}
int check(int x){//check�Լ�
	int i;//for�� �ۿ��� i�� ����ؼ� �ƿ� ���� ������
	for (i = 0;i < 20;i++) {
		if (ziphap[i] == x) {
			printf("1 ");//x�� ���� ���� ������ 1 ����ϰ� Ż��
			break;
		}
	}
	if (i == 20) {//x�� ���� ���� ��� for���� �ִ�� �ݺ����� ���
		printf("0 ");
	}
}
int toggle(int x){//toggle�Լ�
	for (int i = 0; i < 20; i++) {
		if (ziphap[i] == x) {
			ziphap[i] = 0;
			for (int j = 0;j < i + 1;j++) {
				ziphap[i + j] = ziphap[i + j + 1];
				ziphap[i + j + 1] = 0;
			}
			break;
		}
		else if (ziphap[i] == 0) {
			ziphap[i] = x;
			break;
		}
	}
}
int all(int x){//all�Լ�
	for (int i = 0; i < 20; i++) {
		ziphap[i] = i+1;
	}
}
int empty(int x){//empty�Լ�
	for (int i = 0; i < 20; i++) {
		ziphap[i] = 0;
	}
}