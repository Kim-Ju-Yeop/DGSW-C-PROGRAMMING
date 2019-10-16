// 46. 재귀함수를 이용하여 10진수를 2진수로 바꾸어 출력하는 프로그램을 작성하시오
#include <stdio.h>
twojinsu(int num)
{
	if (num == 1)
	{
		printf("1");
		return num;
	}


	twojinsu(num / 2);
	printf("%d", num % 2);

}

int main()
{
	int num = 0;
	printf("10진수를 입력해주세요 : ");
	scanf("%d", &num);

	twojinsu(num);
}
