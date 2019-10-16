// 50. 두 수를 입력받아 첫번째 수를 두번째 수만큼 제곱값을 구하는 함수를 재귀함수로 만들어라.
#include <stdio.h>
int main()
{
	int num1, num2;
	int total = 1;
	printf("두 개의 정수를 입력해주세요 : ");
	scanf("%d %d", &num1, &num2);

	printf("%d",bob(num1, num2, total));
	
}

int bob(int num1, int num2, int total)
{
	if (num2 == 0)
		return total;

	total = total * num1;
	bob(num1, num2-1, total);
}

// 다른방법
#include <stdio.h>
int main()
{
	int num1, num2;
	
	printf("두 개의 정수를 입력해주세요 : ");
	scanf("%d %d", &num1, &num2);

	printf("%d",bob(num1, num2));

}

int bob(int num1, int num2)
{
	if (num2 == 0)
		return 1;

	return num1*bob(num1, num2-1);
}
