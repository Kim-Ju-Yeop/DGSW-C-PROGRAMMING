/* 문제 4)
   1 부터 30까지의 수를 출력하였을 떄 3의 배수는 "three". 5의 배수는 "fiva" 3의 배수이면서 5의 배수인 수는 "three&five" 라는 영문자가 출력되도록 하십시오.
   반드시 for문과 if ~ else 문을 사용하시오. */

#include<stdio.h>
int main() {
	
	int i; 
	for (i = 1; i <= 30; i++)
	{

		if (i % 3 == 0 && i % 5 == 0)
		{
		printf("three&five\n");
		}

		else if (i % 3 == 0)
		{
			printf("three\n");
		}

		else if (i % 5 == 0)
		{
			printf("five\n");
		}

		
		
		else
			printf("%d\n", i);
	}




	return 0;
	
}