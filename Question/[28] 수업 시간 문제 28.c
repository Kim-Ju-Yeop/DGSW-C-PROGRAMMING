// 28. 문자 피라미드를 출력하는 프로그램을 작성하시오.
// Z부터 출력하여 마지막은 a부터 z까지 출력하는 피라미드를 만드십시오.
#include <stdio.h>
int main()
{
	int i, j, k;
	for (i = 0; i < 26; i++) // 별의 줄의 수를 담당하는 반복문
	{
		for (j = 26 - i; j > 1; j--) // 공백을 담당하는 반복문
		{
			printf(" ");

		}
		for (k = 122 - i; k <= 122; k++) // 별의 수를 담담하는 반복문
		{
			printf("%c", k);
		}
		printf("\n");


	}

}