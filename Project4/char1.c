#include<stdio.h>
main() {
	//char str[4] = { 'a', 'b', 'c' , '\0'};
	//char str[4] = "abc";
	//char str[4] = "abcdef";
	//char str[6] = "abc";
	//char str[4] = "";
	char str[] = "abc"; //������(�迭�� ũ�Ⱑ �ڵ����)

	for (int i = 0; i < 4; i++) {
		printf("%c\t", str[i]);
	}
	printf("\n");
	system("pause");
}