// 배열 4
// Null 문자에 대해서 알아보자
#include <stdio.h>
int main(void)
{
	char str[] = "Good morning!";
	printf("배열 str의 크기 : %d\n", sizeof(str)); // str의 크기는 14이다.
	printf("널 문자 문자형 출력 : %c\n", str[13]); // 널 문자의 문자형은 출력이 되지 않는다.
	printf("널 문자 정수형 출력 : %d\n", str[13]); // 널 문자의 정수형은 0 이다.

	str[12] = '?'; // str[12] 의 값 ! 를 ?로 할당한다.
	printf("문자열 출력 : %s\n", str);
	return 0;
}