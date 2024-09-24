#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class example {
	T data;
};

int main(void) {

	vector<long long> v;

	// 미리 공간을 많이 확보하자, 성능을 위해
	v.reserve(100);

	// 벡터 추가
	v.push_back(4);
	v.push_back(6);
	v.push_back(342);
	v.push_back(43);
	v.push_back(1000);

	// 값 접근
	cout << v[0] << endl;
	cout << v.at(1) << endl;

	// 값 수정
	cout << v[4] << endl;
	v[4] = 1001;
	cout << v[4] << endl;

	cout << "---------------" << endl;

	// 크기 확인
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}
	cout << "제거 전 크기 : " << v.size() << endl;

	cout << "---------------" << endl;
	
	// 끝값 제거
	v.pop_back();
	v.pop_back();

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}
	cout << "제거 후 크기 : " << v.size() << endl;

	return 0;
}