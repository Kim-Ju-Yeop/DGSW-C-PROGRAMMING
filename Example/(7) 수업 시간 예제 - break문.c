// break 문
#include <stdio.h>
int main(void)
{
	int sum = 0, num = 0; // sum 변수와 num 변수를 0으로 초기화 시켜준다.

	while (1) // while문의 조건은 참 조건문이다. 무한반복
	{
		sum += num; // sum 변수에 num값을 더해준다.
		if (sum > 5000) // if문의 조건은 sum 변수가 5000이상이 될때 조건문을 break 한다.
			break; // sum이 5000이 되기전까지 num 값은 계속 증가한다.
		num++;
	}

	printf("sum : %d\n", sum); 
	printf("num : %d\n", num);
	return 0;
}