// 32. � ���� �Է¹��� �� �� ���� �������� ����Ͽ���
#include <stdio.h>
int main(void)
{
	int dan;
	int i;

	printf("�� ���� ����� ������ �Է����ֽʽÿ� : ");
	scanf_s("%d", &dan);

	for (i = 1; i <= 9; i++)
	{
		printf("%d x %d = %d\n", dan, i, dan * i);
	}
}

