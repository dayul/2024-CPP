#include <iostream>
#include <string>

using namespace std;

class Person {
private : 
	string name_;
	int hakbun_;
public :
	Person(string name, int hakbun) : name_(name), hakbun_(hakbun){ }
	~Person() { cout << "Person Ŭ���� �Ҹ�" << endl; }
	void PrintShow() {
		cout << "Person Ŭ������ PrintShow()" << endl;
	}
};

class Student : Person {
private :
	string university_;
public :
	Student(string university, string name, int hakbun) : Person(name, hakbun), university_(university){}
	~Student() { cout << "Student Ŭ���� �Ҹ�" << endl; }
	void PrintShow() {
		cout << "Student Ŭ������ PrintShow()" << endl;
		Person::PrintShow();
	}
};

int main(void) {
	
	Student *stu = new Student("�̸�", "�ߴ���", 2215);
	Student stu2 = Student("�̸�", "�����", 2217);

	stu->PrintShow();
	stu2.PrintShow();

	delete stu;

	return 0;
}