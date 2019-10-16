// 51. 어떤 수를 입력받아 피보나치 수를 구하는 함수를 재귀함수를 통해 만들어라.
#include <stdio.h>
int main()
{
	int num;
	
	printf("정수를 입력해주세요 : ");
	scanf("%d", &num);

	for (int i = 0; i <= num; i++)
	{
		printf("%d번째 피보나치수 : %d\n", i, pibonachi(i));
	}
}

int pibonachi(int num)
{	
	if (num == 0)
		return 0;
	if (num == 1)
		return 1;
	
	return pibonachi(num - 1) + pibonachi(num - 2);

}
