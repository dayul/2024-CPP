#include <iostream>
#include <string>

int main(void) {

	std::string str = "develop hungry";		// ��ü�� ����� (C++)
	std::string str2;

	// 1. str�� �ִ� ������ str2�� ���� (C��� ���)
	//int i = 0;
	//for (; str[i] != '\0'; i++) {
	//	str2[i] = str[i];
	//}
	//str2[i] = str[i];	// �ι���('\0') ����


	// 2. str�� �ִ� ������ str2�� ����	(C��� ���)
	//strcpy(str2, str);


	// 3. str�� �ִ� ������ str2�� ���� (C++ ���)
	str2 = str;
	std::cout << str2;

	return 0;
}