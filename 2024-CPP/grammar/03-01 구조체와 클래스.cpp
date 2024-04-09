#include <iostream>
#include <string>

using namespace std;

struct Student {
	int hakbun_;
	string name_;
};

int main(void) {
	
	struct Student dayul;
	// 구조체는 default가 public
	dayul.hakbun_ = 2215;
	dayul.name_ = "추다율";

	return 0;
}