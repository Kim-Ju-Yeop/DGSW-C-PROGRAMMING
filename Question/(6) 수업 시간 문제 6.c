// 6. 7 과 9 의 배수를 출력하되 중복은 출력하면 안된다. 
#include <stdio.h>
int main()
{
	int num; //num값을 배수값으로 둔다.
	

	for (num = 1; num < 100; num++)
	{	
		if(num % 7 == 0 || num % 9 == 0) //  num % 7 의 의미는 나누어 떨어진다라는 뜻이며 즉 배수라는 뜻이다. || OR연산자를 사용하였다.
		printf("%d\n", num);
	}
	
	return 0;
}
