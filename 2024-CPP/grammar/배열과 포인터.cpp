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


	int i = 1;
	char c = 'b';
	double d = 3.0;

	int* pi = &i;
	char* pc = &c;
	double* pd = &d;

	printf("%d %d %d\n", pi, pc, pd);
	printf("%d %d %d\n", pi + 1, pc + 1, pd + 1);
	// ���� 4, 1, 8 ����

	// printf("%d %d %d\n, sizeof(pi), sizeof(pc), sizeof(pd));
	// 4, 4, 4 ������ ������ ũ��� 4byte

	pi = arr;		// �迭�� �ּ�
	printf("%d %d\n", pi + 1, arr + 1);			// ���� �� ����� ���� ����
	printf("%d %d\n", *(pi + 1), *(arr + 1));
	printf("%d %d\n", pi[1], arr[1]);
	
	return 0;
}
