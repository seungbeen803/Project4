#include<stdio.h>
main() {
	char s[100];
	printf("���ڿ��� �Է��ϼ��� : ");
	scanf("%s", s);
	int i = 0;
	while (s[i] != '\0') {
		i++;
	}
	printf("���ڿ��� ���̴� %d \n", i);
	system("pause");
}