#include <iostream> 

using namespace std;

void call_by_pointer(int* val) {
	// ������ ���� val����� ����Ű�� �ִ� num�� ���� �����
	*val = 10;
}

int main(void) {

	int num = 4;		
	call_by_pointer(&num);		// num�� �ּҰ��� �ѱ�, ���� �ٲ�
	cout << num;
	
	return 0;
}
