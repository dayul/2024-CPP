#include <iostream>
#include <string>

using namespace std;

class Person {
public :
	Person(string name, int age) : name_(name), age_(age) {}

	void ShowPerson() {
		cout << name_ << "�� ���̴� " << age_ << "�Դϴ�." << endl;
	}
private :
	string name_;
	int age_;
};

class Student : public Person {
public :
	// �θ� �����ڰ� �ڽ� �����ں��� ���� ȣ��
	Student(string name, int age, int id) : Person(name, age), id_(id) {
	}

	void show_person() {
		cout << id_ << endl;
		Person::ShowPerson();		// �θ� Ŭ������ ����Լ� ShowPerson ���
	}

private :
	int id_;
};

int main(void) {
	Student *stu = new Student("�ߴ���", 18, 2215);
	stu->show_person();
}