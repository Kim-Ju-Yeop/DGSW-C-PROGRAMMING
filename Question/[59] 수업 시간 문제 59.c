// 59. 8개 char형 배열을 선언하고 "HEESONG" 이라는 문자열을 저장한 후 1개의 알파벳을 입력받는다. 입력받은 알파벳이 배열의 몇 번째 위치에 있는지 출력하는 프로그램을 작성하시오 만약 
#include <stdio.h>
int main()
{
	char input;
	int i;
	int g = 0;
	char arr[8] = {"HEESONG"};
	
	printf("1개의 알파벳을 입력해주세요 : ");
	scanf("%c", &input);

	for (i = 0; i < 8; i++)
	{
		
		if (input == arr[i])
		{
			printf("%d ",i);
			g++;
		}
		
	}

	if (g == 0)
	{
		printf("없음");
	}
	
}
