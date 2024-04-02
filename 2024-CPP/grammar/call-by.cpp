#include <iostream> 

using namespace std;

void call_by_pointer(int* val) {
	// ������ ���� val����� ����Ű�� �ִ� num�� ���� �����
	*val = 10;
}

void call_by_reference(int& val) {
	// ���� ���� val�� ����� �����ϴ� num�� ���� �����
	val = 11;
}

int main(void) {

	int num = 4;		
	call_by_pointer(&num);		// ������, num�� �ּҰ��� �ѱ�, ���� �ٲ�
	cout << num << endl;

	call_by_reference(num);		// ����
	cout << num;
	
	return 0;
}
