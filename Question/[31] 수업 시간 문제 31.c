// 31. ���丮���� ����Լ��� ���� ���α׷��� ����ϴ� ������ ����Ͻʽÿ�. 
// Ǯ�� 1
#include <stdio.h>
int factorial(int num,int total) // factorial �Լ� ���� �Է°��� total ���� �޾��ش�.
{
	if (num == 0)
		return total;
	total *= num; // total ���� num���� ���Ѵ�.
	factorial(num - 1, total);
}

int main(void)
{
	int input;
	printf("���� �Է����ּ��� : ");
	scanf_s("%d", &input);
	printf("%d! = %d\n", input, factorial(input, 1));

}

// Ǯ�� 2
#include <stdio.h>
int factorial(int num) // factorial �Լ� ���� �Է°��� total ���� �޾��ش�.
{
	if (num == 0)
	return 1;

	else
	return num * factorial(num - 1);
}

int main(void)
{
	int input;
	printf("���� �Է����ּ��� : ");
	scanf_s("%d", &input);
	printf("%d! = %d\n", input, factorial(input, 1));

}