// 37. �Է¹��� ���ڸ� ���� �ڸ� �� ���� ����Ͽ���.
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
	printf("������ �Է����ּ��� : ");
	scanf_s("%d", &num);
	updown(num);
	return 0;
}

