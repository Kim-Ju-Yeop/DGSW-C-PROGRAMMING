// 배열 6
// 띄움 문자 출력이 가능한지 알아보자
#include <stdio.h>
int main(void)
{
	char str[50]; // str 변수의 크기를 50으로 넉넉히 저장해준다.
	int idx = 0; // while 문에서 사용할 변수이다.

	printf("문자열 입력 : ");
	scanf_s("%s", str, sizeof(str));
	printf("입력 받은 문자열 : %s\n", str);

	printf("문자 단위 출력 : ");
	// str[] 값이 널 값이 될때 프로그램이 종료된다.
	while (str[idx] != '\0')
	{
		printf("%c", str[idx]);
		idx++;
	}
	printf("\n");
	return 0;
}