#include <iostream> 
#include <stdio.h>

using namespace std;

int main(void) {

	int arr[4] = {10, 20, 30, 40};
	char str[4] = "abc";

	printf("%d %d\n", &arr, &arr[1]);		// 주소값 4byte 만큼의 차이
	printf("%d %d\n", arr + 0, arr + 1);	// 주소값이 같음

	printf("%d %d\n", arr[0], arr[1]);		// 같음
	printf("%d %d\n", *(arr+0), *(arr+1));	// 포인터가 배열에 접근 가능

	printf("%d %d\n", &str, &str[1]);		// 주소값 1byte 만큼의 차이


	int i = 1;
	char c = 'b';
	double d = 3.0;

	int* pi = &i;
	char* pc = &c;
	double* pd = &d;

	printf("%d %d %d\n", pi, pc, pd);
	printf("%d %d %d\n", pi + 1, pc + 1, pd + 1);
	// 각각 4, 1, 8 차이

	// printf("%d %d %d\n, sizeof(pi), sizeof(pc), sizeof(pd));
	// 4, 4, 4 포인터 변수의 크기는 4byte

	pi = arr;		// 배열은 주소
	printf("%d %d\n", pi + 1, arr + 1);			// 밑의 두 문장과 값이 같음
	printf("%d %d\n", *(pi + 1), *(arr + 1));
	printf("%d %d\n", pi[1], arr[1]);
	
	return 0;
}
