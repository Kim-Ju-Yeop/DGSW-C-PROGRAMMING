// 22. while문을 사용하여 입력받은 정수부터 1까지 출력하는 프로그램
#include <stdio.h>
int main(void)
{
	int num;
	printf("정수를 입력해주세요 : ");
	scanf_s("%d", &num);
	int i = num;
	while (i>0)
	{
		printf("%d ", i);
		i--;
	}

}