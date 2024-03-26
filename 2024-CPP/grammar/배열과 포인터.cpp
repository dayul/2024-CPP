#include <iostream> 
#include <stdio.h>

using namespace std;

int main(void) {

	int arr[4] = {10, 20, 30, 40};
	char str[4] = "abc";

	printf("%d %d\n", &arr, &arr[1]);		// 주소값 4byte 만큼의 차이
	printf("%d %d\n", &str, &str[1]);		// 주소값 1byte 만큼의 차이
	
	return 0;
}
