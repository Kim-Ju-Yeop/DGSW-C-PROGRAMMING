// 33. 어떤 두 수를 입력받은 후 두 수 사이의 구구단을 모두 출력하여라
#include <stdio.h>
int main(void)
{
	int num1, num2;
	int i;
	int j;

	printf("두 수를 입력해주세요 : ");
	scanf_s("%d %d", &num1, &num2);


	for (i = num1; i <= num2; i++)
	{
		printf("<%d단>\n", i);
		for (j = 1; j <= 9; j++)
		{
			printf("%d x %d = %d\n", i, j, i * j);

		}

		printf("---------------\n");


	}

}