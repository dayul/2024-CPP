#include <iostream>
#include <string>

using namespace std;

// typename 말고, class도 가능
template <typename T>
T sum(T a, T b) {
	return a + b;
}

int main(void) {
	cout << sum<int>(1, 2) << endl;
	cout << sum<float>(1.f, 2.f) << endl;
	cout << sum<string>("1", "2") << endl;

	return 0;
}