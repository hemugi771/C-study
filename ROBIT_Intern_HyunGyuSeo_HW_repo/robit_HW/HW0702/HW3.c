#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int test(int a, char str[9]);

int main() {
	int play = 0;
	printf("�� �Է�\n");
	char str[9];
	scanf("%s", str);//���ڿ��� ���� ������ �Է� ����
	play = test(play, str);
	printf("\n��� : ");
	switch (play) {//�Լ��� ��ȯ���� ���� ���� ������ �Ǵ�
	case 1:
		printf("ascending");
		return 0;
	case 2:
		printf("descending");
		return 0;
	default:
		printf("mixed");
		return 0;
	}
}
int test(int a, char str[9]) {//str�� � ���·� �Ǿ��ִ��� �Ǻ��ϴ� �Լ�
		if (str[0] == 'c'&& str[1] == 'd'&&str[2] == 'e'&& str[3] == 'f'&& str[4] == 'g'&& str[5] == 'a'&& str[6] == 'b'&&str[7] == 'C') { 
			return 1;//ascending
		}
		if (str[0] == 'C' && str[1] == 'b' && str[2] == 'a' && str[3] == 'g' && str[4] == 'f' && str[5] == 'e' && str[6] == 'd' && str[7] == 'c') {
			return 2;//descending
		}else {
			return 3;//mixed
		}
}