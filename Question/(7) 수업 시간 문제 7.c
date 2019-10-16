// 7. 두 개의 정수를 입력받아 뺄셈을 하십시오 그러나 큰 수에서 작은수를 빼야합니다. 결과값은 0 이상이 되어야합니다.
#include <stdio.h>
int main()
{
	int num1, num2;
	printf("두개의 정수를 입력해주세요 : ");
	scanf("%d %d", &num1, &num2);

	if (num1 > num2)
		printf("결과 : %d", num1 - num2);
	else
		printf("결과 : %d", num2 - num1);
}
