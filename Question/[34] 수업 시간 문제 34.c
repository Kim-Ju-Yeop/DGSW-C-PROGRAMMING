// 34. ������ �Է¹����� ������ ����ϴ� ���α׷��� if,if~else,else���� ����Ͽ� ���α׷��� �ۼ��Ͻÿ�
#include <stdio.h>
int main(void)
{
	int num;
	printf("������ �Է����ּ��� : ");
	scanf_s("%d", &num);

	if (num >= 90)
	{
		printf("A");
	}
	else if (num >= 80)
	{
		printf("B");
	}
	else if (num >= 70)
	{
		printf("C");
	}
	else if (num >= 60)
	{
		printf("D");
	}
	else
	{
		printf("E");
	}
	return 0;
}

