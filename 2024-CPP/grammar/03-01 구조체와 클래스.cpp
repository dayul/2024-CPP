#include <iostream>
#include <string>

using namespace std;

struct Student {
	int hakbun_;
	string name_;
};

int main(void) {
	
	struct Student dayul;
	// ����ü�� default�� public
	dayul.hakbun_ = 2215;
	dayul.name_ = "�ߴ���";

	return 0;
}