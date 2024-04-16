#include <iostream>
#include <string.h>

using namespace std;

class Student {
private :
	int hakbun_;
	char* name_;

public :

	// TODO : �����ڿ��� �����Ҵ��� �� �޸� ������ ���� �� ����
	Student(int hakbun, const char* name) : hakbun_(hakbun) {

		int length = strlen(name);	
		name_ = new char[length + 1];		// '/0'�� ���� ���� ���� 1�� �� �߰�
		
		strcpy(name_, name);
	}
	
	// Ŭ������ ����� ���
	void show(void) {
		cout << hakbun_ << " ";
		cout << name_ << endl;
	}
};

int main(void) {
	
	Student* stu = new Student(2215, "�ߴ���");
	stu->show();

	delete stu;		// stu�� ����Ű�� ��ü�� �Ҹ�, name�� ������� ���� (�����ڿ��� �����Ҵ� ���� ���)

	return 0;
}
