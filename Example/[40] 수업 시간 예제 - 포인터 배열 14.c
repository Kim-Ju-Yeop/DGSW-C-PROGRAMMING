// 포인터 배열
// 예제 14
#include <stdio.h>

// Call-By-Reference 를 사용하여 값을 전달하고있다.
void Swap(int * num1, int * num2)
{
	int temp;
	
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}
int main()
{
	int num1 = 10;
	int num2 = 20;

	printf("num1 : %d num2 : %d\n", num1, num2); // num1 : 10 num2 : 20

	Swap(&num1, &num2); // num1 과 num2의 주소값을 전달한다.

	printf("num1 : %d num2 : %d\n", num1, num2);
}
