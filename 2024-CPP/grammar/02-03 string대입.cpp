#include <stdio.h>

int main(void) {

	char str[30] = "develop hungry";
	char str2[30];

	// str�� �ִ� ������ str2�� ����
	int i = 0;
	for (; str[i] != '\0'; i++) {
		str2[i] = str[i];
	}
	str2[i] = str[i];	// �ι���('\0') ����

	printf("%s", str2);

	return 0;
}