// 38. 사용자로부터 영단어를 입력받아 입력받은 영단어의 길이를 계산하여 출력하는 프로그램을 작성하자.
#include <stdio.h>
int main(void)
{
	char str[50];
	char len = 0;

	printf("영단어를 입력해주세요 : ");
	scanf_s("%s", str,sizeof(str));


	while (str[len] != '\0')
	{
		len++;
	}

	printf("입력하신 영단어의 길이는 : %d",len);

}