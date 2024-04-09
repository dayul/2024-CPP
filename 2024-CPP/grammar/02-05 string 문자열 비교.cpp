#include <iostream>
#include <string>

using namespace std;

int main(void) {
	
	string str = "c++";
	if (str == "c++")		// 문자열끼리도 이렇게 비교 가능
		cout << "같은 문자열";
	else
		cout << "다른 문자열";

	return 0;
}