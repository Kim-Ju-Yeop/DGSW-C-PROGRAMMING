// 포인터 배열
// 예제 8
#include <stdio.h>
int main()
{
	char str1[] = "My string";
	char * str2 = "Your String";
	printf("%s %s\n", str1, str2);

	str2 = "Our string"; // 문장 전체를 바꾸는 것은 가능하다.
	printf("%s %s \n", str1, str2);

	str1[0] = "X";
	str2[0] = "X"; // 문제가 발생한다 포인터 함수이기 때문에 한글자 씩 바꾸는 것은 되지 않는다.
	printf("%s %s \n", str1, str2);
	return 0;
}
