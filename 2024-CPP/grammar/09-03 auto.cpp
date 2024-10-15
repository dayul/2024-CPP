#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

	vector<string> v = {"롯데관광", "동화면세점", "제주드림타워"};
	
	// string이라는 자료형이 명확하기 때문에 auto
	for (auto value : v) {
		cout << value << endl;
	}

	// auto a; (error)
	auto a = 2;			// 가능


	return 0;
}