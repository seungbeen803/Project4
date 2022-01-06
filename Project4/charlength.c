#include<stdio.h>
main() {
	char s[100];
	printf("문자열을 입력하세요 : ");
	scanf("%s", s);
	int i = 0;
	while (s[i] != '\0') {
		i++;
	}
	printf("문자열의 길이는 %d \n", i);
	system("pause");
}