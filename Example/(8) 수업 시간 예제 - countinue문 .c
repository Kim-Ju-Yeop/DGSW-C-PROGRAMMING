// countinue ¹®
#include <stdio.h>
int main(void)
{
	int num;
	printf("start!");

	for (num = 1; num < 20; num++)
	{
		if (num % 2 == 0 || num % 3 == 0)
			continue;
		printf("%d\n", num);

	}
	printf("end!");
	return 0;
}