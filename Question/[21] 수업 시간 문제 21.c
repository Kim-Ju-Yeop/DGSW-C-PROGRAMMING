// 21. while 문을 사용하여 1부터 입력받은 정수까지 차례로 출력하는 프로그램
#include <stdio.h>
int main(void)
{
	int num;
	int i = 1;
	printf("정수를 입력해주세요 : ");
	scanf_s("%d", &num);

	while (i <= num)
	{
		printf("%d ", i);
		i++;
	}

}