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
	Student() {
		hakbun_ = 0000;
		name_ = "��̸�";
	}

	Student(int hakbun, string name){
		hakbun_ = hakbun;
		name_ = name;
	}
	
	// Ŭ������ ����� ���
	void show(void) {
		cout << hakbun_ << " " +  name_ << endl;
	}
};

int main(void) {
	
	Student dayul = Student(2215, "�ߴ���");
	Student stu = Student();

	dayul.show();
	stu.show();

	return 0;
}