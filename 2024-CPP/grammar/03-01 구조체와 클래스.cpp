#include <iostream>
#include <string>

using namespace std;

class Student {
	int hakbun_;
	string name_;
};

int main(void) {
	
	Student dayul;		// C++������ struct Ű���� ���� ��
	// ����ü�� default�� public
	// Ŭ������ default�� private
	dayul.hakbun_ = 2215;
	dayul.name_ = "�ߴ���";

	return 0;
}