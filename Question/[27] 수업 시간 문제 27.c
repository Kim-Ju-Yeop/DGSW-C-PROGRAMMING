// 27. 자연수 n 을 입력받아 다음과 같이 출력하는 프로그램을 작성하시오.
#include <stdio.h>
int main()
{
	int i, j, k;
	int num;
	printf("자연수를 입력해주세요 : ");
	scanf_s("%d", &num);

	for (i = 1; i <= num; i++) // 줄의 수를 입력해주는 반복문이다.
	{
		for (j = num - i; j > 0; j--) // 공백을 입력해주는 반복문이다. // num은 가만히 있고 증가하는 수인 i를 빼준다.
		{
			printf(" ");
		}
		for (k = 1; k <= i; k++) // 별의 수를 입력해주는 반복문이다. // 증가하는 i 까지 입력받는다.
		{
			printf("*");
		}
		printf("\n");
	}
}