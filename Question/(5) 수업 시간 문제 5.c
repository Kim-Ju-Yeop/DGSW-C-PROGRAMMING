// 5. 대문자를 입력받아 소문자로 출력하는 프로그램을 출력하라.
#include <stdio.h>
int main()
{
	char a;
	printf("대문자를 입력해주세요 : ");
	scanf("%c", &a);
	printf("소문자 : %c", a + ('a' - 'A'));
	return 0;
}
