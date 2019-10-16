// 배열 5
// null 문자의 사용법을 알아보자
#include <stdio.h>
int main(void)
{
	char str[50] = "I like C programming"; // str 변수의 크기를 50으로 지정하고 문자열을 초기화를 했다.
	printf("string : %s\n", str);

	str[8] = '\0'; // str[8] 값에 널 문자를 저장한다.
	printf("string : %s\n", str);

	str[6] = '\0'; // str[6] 값에 널 문자를 저장한다.
	printf("string : %s\n", str);

	str[1] = '\0'; // str[1] 값에 널 문자를 저장한다.
	printf("string : %s\n", str);
	return 0;
}