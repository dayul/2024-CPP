#include <iostream>
#include <vector>
#include <string>
using namespace std;
class SW2_2 {
public:
	SW2_2(string name) : name_(name)
	{
		num_++;
	}
	static string get_teacher(void) { return teacher_; }
	static int get_num(void) { return num_; }
	string get_name(void) { return name_; }
private:
	static string teacher_;	
	static int num_;
	string name_;
};
string SW2_2::teacher_ = "권지웅";
int SW2_2::num_ = 0;


int main(void) {
	SW2_2* da = new SW2_2("다율");
	cout << "인원 수 : " << SW2_2::get_num() << endl;		// 논리적으로는 클래스 이름을 붙이는 게 맞음

	SW2_2* ji = new SW2_2("지수");
	cout << "인원 수 : " << ji->get_num() << endl;

	delete ji;
	delete da;

	return 0;
}