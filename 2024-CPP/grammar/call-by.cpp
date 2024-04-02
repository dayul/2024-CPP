#include <iostream> 

using namespace std;

void call_by_pointer(int* val) {
	// 포인터 변수 val만들고 가르키고 있는 num의 값이 변경됨
	*val = 10;
}

void call_by_reference(int& val) {
	// 참조 변수 val를 만들고 참조하는 num의 값이 변경됨
	val = 11;
}

int main(void) {

	int num = 4;		
	call_by_pointer(&num);		// 포인터, num의 주소값을 넘김, 값이 바뀜
	cout << num << endl;

	call_by_reference(num);		// 참조
	cout << num;
	
	return 0;
}
