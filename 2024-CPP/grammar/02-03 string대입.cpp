#include <iostream>
#include <string>

int main(void) {

	std::string str = "develop hungry";		// 객체로 저장됨 (C++)
	std::string str2;

	// 1. str에 있는 내용을 str2에 복사 (C언어 방식)
	//int i = 0;
	//for (; str[i] != '\0'; i++) {
	//	str2[i] = str[i];
	//}
	//str2[i] = str[i];	// 널문자('\0') 복사


	// 2. str에 있는 내용을 str2에 복사	(C언어 방식)
	//strcpy(str2, str);


	// 3. str에 있는 내용을 str2에 복사 (C++ 방식)
	str2 = str;
	std::cout << str2;

	return 0;
}