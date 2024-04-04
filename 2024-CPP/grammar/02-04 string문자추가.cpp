#include <iostream>
#include <string>

using namespace std;

int main(void) {
	// 기존 문자열에 추가 (C)
	//char str[30] = "c";
	//
	//strcat(str, "addition");	
	//printf("%s", str);


	// 기존 문자열에 추가 (C++)
	string str = "c++";
	str += "addition";
	return 0;
}