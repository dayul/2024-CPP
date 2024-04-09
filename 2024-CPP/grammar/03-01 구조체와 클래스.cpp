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
	Student(int hakbun, string name){
		hakbun_ = hakbun;
		name_ = name;
	}
};

int main(void) {
	
	Student dayul = Student(2215, "추다율");

	return 0;
}