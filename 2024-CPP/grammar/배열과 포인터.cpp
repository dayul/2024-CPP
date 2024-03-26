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

	
	return 0;
}
