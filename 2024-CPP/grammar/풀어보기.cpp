#include <iostream>
#include <string>

using namespace std;

class Person {
private : 
	string name_;
	int hakbun_;
public :
	Person(string name, int hakbun) : name_(name), hakbun_(hakbun){ }
	~Person() { cout << "Person 클래스 소멸" << endl; }
	void PrintShow() {
		cout << "Person 클래스의 PrintShow()" << endl;
	}
};

class Student : Person {
private :
	string university_;
public :
	Student(string university, string name, int hakbun) : Person(name, hakbun), university_(university){}
	~Student() { cout << "Student 클래스 소멸" << endl; }
	void PrintShow() {
		cout << "Student 클래스의 PrintShow()" << endl;
		Person::PrintShow();
	}
};

int main(void) {
	
	Student *stu = new Student("미림", "추다율", 2215);
	Student stu2 = Student("미림", "지우쌤", 2217);

	stu->PrintShow();
	stu2.PrintShow();

	delete stu;

	return 0;
}