// 배열 3
// 배열 문자 출력하기
#include <stdio.h>
int main()
{
	char voca[] = { 'G','O','O','D',' ','T','I','M','E' }; // voca 변수에 값들을 초기화시켜준다.
	int i;

	// 초기화 시킨 값들을 반복적으로 출력할 for문이다.
	for (i = 0; i < sizeof(voca) / ; i++) // sizeof(voca) 자리에 9를 넣어도 된다.
	{
		printf("%c", voca[i]);
	}
}