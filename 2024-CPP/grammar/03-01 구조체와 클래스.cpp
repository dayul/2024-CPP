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

	Student(int hakbun, string name){
		hakbun_ = hakbun;
		name_ = name;
	}
	
	// 클래스의 멤버를 출력
	void show(void) {
		cout << hakbun_ << " " +  name_ << endl;
	}
};

int main(void) {
	
	Student dayul = Student(2215, "추다율");
	Student stu = Student();

	dayul.show();
	stu.show();

	return 0;
}