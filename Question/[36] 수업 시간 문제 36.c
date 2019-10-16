// 36. 어떤 수 를 입력받은 후 그 수보다 작은 소수를 모두 출력하는 프로그램을 작성하시오.
#include <stdio.h>
int main(void)
{
	int num;
	int i;
	int j;
	int k = 0;
	printf("정수를 입력해주세요 : ");
	scanf_s("%d", &num);

	for (i = num; i > 1; i--)
	{
		k = 0;
		for (j = i; j >= 1; j--)
		{
			if (i % j == 0)
			{
				k++;
			}
		}
		if (k == 2)
			printf("%d ", i);

	}
}
