#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector<int> v = {1, 2, 3, 4, 5};

	// *(포인터)를 못 씀 대신, &(참조) 가능
	// value는 지역변수이기 때문에 v의 데이터는 변화 X
	for (int value : v) {
		cout << value << endl;
	}

	return 0;
}