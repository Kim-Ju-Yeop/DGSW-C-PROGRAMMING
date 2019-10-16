// 10. switch 문 - 문자입력
#include <stdio.h>
int main()
{
	char num;
	printf("M 오전, A 오후, E 저녁 \n");
	printf("입력: ");
	scanf("%c",&num); // num에 문자를 입력받는다.

	switch (num)
	{
	case 'M':
	case 'm':
		printf("Morning\n");
		break;
	case 'A':
	case 'a':
		printf("Afternoon\n");
		break;
	case 'E':
	case 'e':
		printf("Evening\n");
		break;
	}
	return 0;
}