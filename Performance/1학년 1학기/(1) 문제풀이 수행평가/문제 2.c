/* 문제 2)
   암호놀이를 하고자 한다. 입력한 영어 알파벳의 3번째 뒤의 알파벳을 출력하는 프로그램을 작성해보자.
   (알파벳은 소문자만 사용하며 소문자 a의 아스키코드는 97이고, 소문자 z의 아스키코드값은 122이다.)
   예) a = d, h = k, z = c */
							
#include <stdio.h>
int main()
{
	char alpa;

	printf("알파벳을 입력하세요 : ");
	scanf("%c", &alpa);

	if (alpa >= 120)
	{
		printf("%c", alpa - 23);
		return 0;
	}

	printf("%c", alpa += 3);




}