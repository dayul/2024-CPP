#include <iostream> 

using namespace std;

// 함수 오버로딩 : 함수이름이 같고 매개변수가 다른 것
int mul(int a, int b) {
	return a * b;
}
float mul(float a, float b) {
	return a * b;
}

int main(void) {

	cout << mul(2, 2) << endl;
	cout << mul(2.2f, 2.2f) << endl;

	return 0;
}