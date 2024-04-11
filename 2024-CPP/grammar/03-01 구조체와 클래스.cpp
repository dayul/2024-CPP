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

	Student(int hakbun){
		// this : �ڱ� �ڽ��� ����Ű�� ������
		// ����� ��Ȯ�ϰ� ����ų �� ����
		this->hakbun_ = hakbun;
	}

	// ������� �ʱ�ȭ : const/���� ��������� �ʱ�ȭ �� �� ����
	Student(int hakbun, string name) : hakbun_(hakbun), name_(name){
	}

	
	// Ŭ������ ����� ���
	void show(void) {
		cout << hakbun_ << " " +  name_ << endl;
	}
};

int main(void) {
	
	// ���� �Ҵ� : �޸𸮴� heap���� �Ҵ�, ����(��Ÿ��) �� �޸� ũ�Ⱑ ������
	Student* student = new Student[3]{
		{2215, "�ߴ���"},
		{2202, "������"},
		{2203, "������"}
	};

	for (int i = 0; i < 3; i++) {
		student[i].show();		// -> �ƴ�
	}
	
	// ���� �Ҵ� : �޸𸮴� stack���� �Ҵ�, ������ �� �޸� ũ�Ⱑ ������
	Student stu = Student();

	student->show();
	stu.show();

	// �迭�� ���� �Ҵ� ����
	delete[] student;

	return 0;
}
