// goto 문 
#include <stdio.h>
int main(void)
{
	int num;
	printf("자연수 입력 : ");
	scanf("%d", &num);

	if (num == 1)
		goto ONE;
	else if (num == 2)
		goto TWO;
	else
		goto OTHER;

ONE:
	printf("1을 입력했냐? ㅋㅋㅋㅋㅋㅋ!\n");
	goto END;
TWO:
	printf("2를 입력하셨군요!\n");
	goto END;
OTHER:
	printf("3 혹은 다른 숫자를 입력하셨군요!\n");

END:
	return 0;
}