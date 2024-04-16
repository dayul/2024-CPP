#include <iostream>
#include <string.h>

using namespace std;

class Student {
private :
	int hakbun_;
	char* name_;

public :

	// TODO : 생성자에서 동적할당을 한 메모리 공간을 지울 수 없음
	Student(int hakbun, const char* name) : hakbun_(hakbun) {

		int length = strlen(name);	
		name_ = new char[length + 1];		// '/0'가 들어가기 위한 공간 1개 더 추가
		
		strcpy(name_, name);
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
