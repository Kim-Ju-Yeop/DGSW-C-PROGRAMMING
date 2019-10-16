// 15. 100 이하의 정수를 입력받아서 입력받은 정수부터 100까지의 합을 출력하는 프로그램을 작성하시오.
#include <stdio.h>
int main()
{
	int a = 0;
	int sum = 0;
	scanf("%d", &a);

	while (a<=100)
	{
		sum += a;
		a++;
	}
	printf("%d", sum);
}
