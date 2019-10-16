// 13. 입력하신 값까지 더한 값을 출력하십시오
#include <stdio.h>
int main()
{
	int a = 1;
	int i = 1;
	int result = 0;
	scanf("%d", &a);

	while (i <= a)
	{
		result += i;
		i++;
	}

	printf("%d", result);
}
