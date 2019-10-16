// 63. 세 변수에 저장된 값을 reference 함수를 사용하여 num1 의 값을 num2에 num2의 값을 num3에 num3의 값을 num1에 저장하시오
#include <stdio.h>
void Swap1(int * num1, int * num2, int * num3)
{
	int temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}
void Swap2(int * num1, int * num2, int * num3)
{
	int temp;
	temp = *num3;
	*num3 = *num1;
	*num1 = temp;
	
	
}
int main()
{
	int num1 = 10;
	int num2 = 20;
	int num3 = 30;

	Swap1(&num1, &num2, &num3);
	Swap2(&num1, &num2, &num3);

	printf("num1 : %d\n", num1);
	printf("num1 : %d\n", num2);
	printf("num1 : %d\n", num3);
}
