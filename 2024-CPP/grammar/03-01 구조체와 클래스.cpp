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
		// this : �ڱ� �ڽ��� ����Ű�� ������
		// ����� ��Ȯ�ϰ� ����ų �� ����
		this->hakbun_ = hakbun;
		this->name_ = name;
	}
	
	// Ŭ������ ����� ���
	void show(void) {
		cout << hakbun_ << " " +  name_ << endl;
	}
};

int main(void) {
	
	// ���� �Ҵ� : �޸𸮴� heap���� �Ҵ�, ����(��Ÿ��) �� �޸� ũ�Ⱑ ������
	Student *dayul = new Student(2215, "�ߴ���");
	
	// ���� �Ҵ� : �޸𸮴� stack���� �Ҵ�, ������ �� �޸� ũ�Ⱑ ������
	Student stu = Student();

	dayul->show();
	stu.show();

	// ���� �Ҵ� ����
	delete dayul;

	return 0;
}
