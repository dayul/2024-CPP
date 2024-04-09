#include <iostream>
#include <string>

using namespace std;

class Student {
	int hakbun_;
	string name_;
};

int main(void) {
	
	Student dayul;		// C++에서는 struct 키워드 빼도 됨
	// 구조체는 default가 public
	// 클래스는 default가 private
	dayul.hakbun_ = 2215;
	dayul.name_ = "추다율";

	return 0;
}