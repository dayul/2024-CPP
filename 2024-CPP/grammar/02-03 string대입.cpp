#include <stdio.h>
#include <string.h>

int main(void) {

	char str[30] = "develop hungry";
	char str2[30];

	// 1. str�� �ִ� ������ str2�� ����
	//int i = 0;
	//for (; str[i] != '\0'; i++) {
	//	str2[i] = str[i];
	//}
	//str2[i] = str[i];	// �ι���('\0') ����


	// 2. str�� �ִ� ������ str2�� ����
	strcpy(str2, str);

	printf("%s", str2);

	return 0;
}