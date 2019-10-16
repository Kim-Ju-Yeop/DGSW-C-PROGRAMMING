// 18. 가장 큰수와 가장 작은수를 출력하는 프로그램을 작성하시오
// if else if 문을 사용
#include <stdio.h>
int biggest(int num1,int num2, int num3)
{
	if (num1 > num2 && num1 > num3)
		return num1;
	else if (num2 > num1 && num2 > num3)
		return num2;
	else if (num3 > num1 && num3 > num2)
		return num3;
	

	
}

int smallest(int num1, int num2, int num3)
{
	if (num1 < num2 && num1 < num3)
		return num1;
	else if (num2 < num1 && num2 < num3)
		return num2;
	else if (num3 < num1 && num3 < num2)
		return num3;
}

int main(void)
{
	int a, b, c;
	printf("세 개의 정수를 입력해주세요 : ");
	scanf_s("%d %d %d", &a, &b, &c);
	printf("가장 큰 수는 : %d\n", biggest(a, b, c));
	printf("가장 작은 수는 : %d", smallest(a, b, c));
}

// if else 문 사용 및 삼항연산자 사용
#include <stdio.h>
int biggest(int num1,int num2, int num3) // 가장 큰수를 찾는 함수를 선언해주었다.
{
	if (num1 > num2)
		return num1 > num3 ? num1 : num3;
	else 
		return num2 > num3 ? num2 : num3;


}

int smallest(int num1, int num2, int num3) // 가장 작은수를 찾는 함수를 선언해주었다.
{
	if (num1 < num2)
		return num1 < num3 ? num1 : num3;
	else 
		return num2 < num3 ? num2 : num3;
}

int main(void)
{
	int a, b, c;
	printf("세 개의 정수를 입력해주세요 : ");
	scanf_s("%d %d %d", &a, &b, &c);
	printf("가장 큰 수는 : %d\n", biggest(a, b, c));
	printf("가장 작은 수는 : %d", smallest(a, b, c));
}
