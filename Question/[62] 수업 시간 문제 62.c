// 62. num에 저장된 값을 value 함수와 reference 함수 두가지를 사용하여 제곱을 표현하라
#include <stdio.h>
void SquareByReference(int *n)
{
	 *n = (*n) * (*n);
}

int SquareByValue(int num)
{
	num = num * num;
	return num;
}
int main()
{
	int num = 10;
	

	printf("SquareByValue : %d\n", SquareByValue(num));

	SquareByReference(&num);
	printf("SquareByReference : %d", num);
}
