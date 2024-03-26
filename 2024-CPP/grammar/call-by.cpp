#include <iostream> 

using namespace std;

void call_by_value(int val) {
	// 새로운 지역변수 val을 만들고 값을 넣음
	val = 10;
}

int main(void) {

	int num = 4;		
	call_by_value(num);		// num의 값은 바뀌지 않음
	cout << num;
	
	return 0;
}
