#include <iostream>
#include <string>

using namespace std;

class Student {
private :
	int hakbun_;
	string name_;

// ������ : ��ü�� ������ �� ȣ��Ǵ� �Լ�
// �����ڴ� ��ȯ��, return Ÿ���� ����.
public :
	Student(int hakbun, string name){
		hakbun_ = hakbun;
		name_ = name;
	}
};

int main(void) {
	
	Student dayul = Student(2215, "�ߴ���");

	return 0;
}