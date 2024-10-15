#include <iostream>
#include <map>
using namespace std;

int main(void) {

	map<string, long long> money;

	// 맵 추가
	money["da"] = 100000;
	money["su"] = 200000;

	// 반복자
	// 맵은 순서가 없음
	// first : Key
	// seconde : Value
	//map<string, long long>::iterator iter;
	//for (iter = money.begin(); iter != money.end(); iter++) {
	//	// 포인터이므로 ->
	//	cout << iter->first << "는" << (*iter).second << endl;
	//}

	for (auto iter = money.begin(); iter != money.end(); iter++) {
		cout << iter->first << "는" << iter->second << endl;
	}


	// 값 수정
	money["su"] = 300000;
	cout << money["su"] << endl;

	// 크기
	cout << money.size() << endl;

	return 0;
}