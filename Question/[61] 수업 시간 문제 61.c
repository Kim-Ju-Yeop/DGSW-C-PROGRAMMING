// 61. 100개의 문자형을 저장할 수 있는 배열을 선언하고 %s를 이용하여 문자열을 입력받는다. %s를 이용하여 문자열을 그대로 출력을 하고 반복문을 사용하여 입력받은 문자열을 역순으로 출력한다.
#include <stdio.h>
int main()
{
	int i = 1;
	char arr[100];
	
	printf("단어를 입력해주세요 : ");
	scanf("%s", &arr);
	
	while (arr[i] != '\0')
	{
		i++;
	}
	
	printf("%s", arr);

	for (i; i >= 0; i--)
	{
		printf("%c", arr[i]);
	}
	
}
