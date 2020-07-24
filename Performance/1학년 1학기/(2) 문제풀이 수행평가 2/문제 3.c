/* 문제 3) 성적 A, B, C, D 중에서 입력을 받아 공부를 하면 A 까지 점수가 올라가는 프로그램을 작성하라.
   예) 입력 : D -> C -> B -> A */

#include <stdio.h>
int main()
{

	char grade;
	char * pgrade = &grade;

	scanf("%c", &grade);

	printf("%c\n", grade);


	while (*pgrade != 65)
	{
		*pgrade -= 1;
		printf("공부했습니다 -> 성적 : %c\n", *pgrade);

	}



}