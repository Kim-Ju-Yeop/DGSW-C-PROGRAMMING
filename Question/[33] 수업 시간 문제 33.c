// 33. � �� ���� �Է¹��� �� �� �� ������ �������� ��� ����Ͽ���
#include <stdio.h>
int main(void)
{
	int num1, num2;
	int i;
	int j;

	printf("�� ���� �Է����ּ��� : ");
	scanf_s("%d %d", &num1, &num2);


	for (i = num1; i <= num2; i++)
	{
		printf("<%d��>\n", i);
		for (j = 1; j <= 9; j++)
		{
			printf("%d x %d = %d\n", i, j, i * j);

		}

		printf("---------------\n");


	}

}