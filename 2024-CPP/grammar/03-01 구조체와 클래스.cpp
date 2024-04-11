#include <iostream>
#include <string>

using namespace std;

class Student {
private :
	int hakbun_;
	string name_;

// 생성자 : 객체가 생성될 때 호출되는 함수
// 생성자는 반환형, return 타입이 없다.
public :
	Student() {
		hakbun_ = 0000;
		name_ = "김미림";
	}

	Student(int hakbun){
		// this : 자기 자신을 가리키는 포인터
		// 멤버를 명확하게 가리킬 수 있음
		this->hakbun_ = hakbun;
	}

	// 멤버변수 초기화 : const/참조 멤버변수를 초기화 할 수 있음
	Student(int hakbun, string name) : hakbun_(hakbun), name_(name){
	}

	
	// 클래스의 멤버를 출력
	void show(void) {
		cout << hakbun_ << " " +  name_ << endl;
	}
};

int main(void) {
	
	// 동적 할당 : 메모리는 heap에서 할당, 실행(런타임) 시 메모리 크기가 정해짐
	Student* student = new Student[3]{
		{2215, "추다율"},
		{2202, "나지수"},
		{2203, "박지영"}
	};

	for (int i = 0; i < 3; i++) {
		student[i].show();		// -> 아님
	}
	
	// 정적 할당 : 메모리는 stack에서 할당, 컴파일 시 메모리 크기가 정해짐
	Student stu = Student();

	student->show();
	stu.show();

	// 배열의 동적 할당 해제
	delete[] student;

	return 0;
}
