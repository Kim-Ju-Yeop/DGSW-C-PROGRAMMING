// 71. int first 라는 함수를 작성하여 main 함수에서 first함수로 input 값을 전달하여 두 배로 만든 후 그 값을 return 받아 출력하는 프로그램을 작성하시오.
#include <stdio.h>
int first(int num)
{
	return num * 2;
}
int main()
{
	int input;
	printf("정수를 입력해주세요 : ");
	scanf("%d", &input);

	input = first(input);
	printf("%d", input);
}
