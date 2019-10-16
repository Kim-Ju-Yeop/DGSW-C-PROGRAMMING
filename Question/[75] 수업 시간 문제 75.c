// 75. 두 수를 입력받은 후 두 수의 최대공약수와 최소공배수를 구하는 함수를 구현하여 출력하는 프로그램을 작성하시오.
// 최대공약수를 구하는 함수명 : GCD, 최소공배수를 구하는 함수명 : LCM
#include <stdio.h>
int GCD(int input1, int input2)
{
	int i = 1;

	// total에 최대공약수의 값을 저장한다.
	int total = 0;
	
	while (i <= input1 && i <= input2)
	{
		if (input1 % i == 0 && input2 % i == 0)
		{
			total = i;
		}

		i++;
	}

	printf("%d ", total);

	// LCM은 최소공배수를 구하는 함수이다.
	LCM(input1, input2,total);
	
	
}

int LCM(int input1, int input2, int total)
{
	int i = 1;
	int total2 = 0;

	// 두 수를 곱한 후 최대공약수로 나누면 최소공배수가 나온다. - 유클리드 호제법

	total2 = (input1 * input2) / total;
	printf("%d", total2);

}

int main()
{
	int input1, input2;
	
	
	printf("두 개의 정수를 입력해주세요 : ");
	scanf("%d %d", &input1, &input2);

	// GCD는 최대공약수를 구하는 함수이다.
	GCD(input1, input2);
	
	return 0;

	
}
