// 32. 어떤 수를 입력받은 후 그 수의 구구단을 출력하여라
#include <stdio.h>
int main(void)
{
	int dan;
	int i;

	printf("몇 단을 출력할 것인지 입력해주십시오 : ");
	scanf_s("%d", &dan);

	for (i = 1; i <= 9; i++)
	{
		printf("%d x %d = %d\n", dan, i, dan * i);
	}
}

