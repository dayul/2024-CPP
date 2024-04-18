#include <iostream>
#include <string.h>

using namespace std;

class Student {
private :
	int hakbun_;
	char* name_;

public :

	Student(int hakbun, const char* name) : hakbun_(hakbun) {

		int length = strlen(name);	
		name_ = new char[length + 1];		// '/0'가 들어가기 위한 공간 1개 더 추가
		
		strcpy(name_, name);
	}

	// 소멸자 : 객체가 소멸될 때(메모리에서 지워질 때) 호출되는 함수
	~Student(void) {
		delete[] name_;
	}
	
	// 클래스의 멤버를 출력
	void show(void) {
		cout << hakbun_ << " ";
		cout << name_ << endl;
	}
};

int main(void) {
	
	Student* stu = new Student(2215, "추다율");
	stu->show();

	delete stu;		// stu가 가르키는 객체만 소멸, name은 사라지지 않음 (생성자에서 동적할당 했을 경우)

	return 0;
}
