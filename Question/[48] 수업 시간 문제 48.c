// 48. 어떤 수를 입력받아 그 수만큼 "재미있는 C언어"를 출력하는 프로그램을 재귀함수로 작성하시오.
#include <stdio.h>
int main()
{
	int input;
	printf("정수를 입력해주세요 : ");
	scanf("%d", &input);
	repeat(input);
}

int repeat(int input)
{
	
	if (input == 0)
		return 0;
	printf("재미있는 C언어!\n");
	repeat(input-1);
}
