#include <iostream> 
#include <stdio.h>

using namespace std;

int main(void) {

	int arr[4] = {10, 20, 30, 40};
	char str[4] = "abc";

	printf("%d %d\n", &arr, &arr[1]);		// �ּҰ� 4byte ��ŭ�� ����
	printf("%d %d\n", arr + 0, arr + 1);	// �ּҰ��� ����

	printf("%d %d\n", arr[0], arr[1]);		// ����
	printf("%d %d\n", *(arr+0), *(arr+1));	// �����Ͱ� �迭�� ���� ����

	printf("%d %d\n", &str, &str[1]);		// �ּҰ� 1byte ��ŭ�� ����

	
	return 0;
}
