// 포인터 배열
// 예제 13
#include <stdio.h>

// CallByValue 를 사용하여 값을 전달하고있다.
void Swap(int num1, int num2)
{
	int temp;

	temp = num1;
	num1 = num2;
	num2 = temp;

	printf("2. num1 : %d num2 : %d\n", num1, num2); // num1 : 20 num2 : 10

	// 바꾼값을 반환하지 않아 main 함수에서는 저장되지 않는다.

}
int main()
{
	int num1 = 10;
	int num2 = 20;

	printf("1. num1 : %d num2 : %d\n", num1, num2); // num1 : 10 num2 : 20

	Swap(num1, num2); // num1과 num2의 값을 전달한다.

	printf("3. num1 : %d num2 : %d\n", num1, num2); // num1 : 10 num2 : 20
}
