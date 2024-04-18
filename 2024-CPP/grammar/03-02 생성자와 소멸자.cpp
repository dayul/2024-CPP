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
		cout << "생성자 호출 완료" << endl;
	}

	// 소멸자 : 객체가 소멸될 때(메모리에서 지워질 때) 호출되는 함수
	~Student(void) {
		delete[] name_;
		cout << "소멸자 호출 완료" << endl;
	}
	
	// 클래스의 멤버를 출력
	void show(void) {
		cout << hakbun_ << " ";
		cout << name_ << endl;
	}
};

int main(void) {
	
	Student* stu = new Student(2215, "추다율");
	cout << "나는 아직도 배고프다 - 거스 히딩크" << endl;

	delete stu;		
	cout << "It ain't over till it's over - 요기베라" << endl;

	return 0;
}
