// 37. 입력받은 숫자를 높은 자리 수 부터 출력하여라.
#include <stdio.h>
int updown(int num)
{	
	if (num == 0)
		return;
	updown(num/10);
	printf("%d\n", num % 10);

}

int main()
{
	int num;
	printf("정수를 입력해주세요 : ");
	scanf_s("%d", &num);
	updown(num);
	return 0;
}

