// 포인터 배열
// 예제 9
#include <stdio.h>
int main()
{
	int num1 = 10, num2 = 20, num3 = 30;

	// 포인터 배열 방법을 통해 배열의 크기가 3인 arr포인터에 num1,num2,num3의 주소값을 초기화시켜주고 있다.
	int * arr[3] = { &num1,&num2,&num3 };

	printf("%d\n", *arr[0]); // 포인터 배열 arr[0]번째 값을 가르킨다.
	printf("%d\n", *arr[1]); // 포인터 배열 arr[1]번째 값을 가르킨다.
	printf("%d\n", *arr[2]); // 포인터 배열 arr[2]번째 값을 가르킨다.
}
