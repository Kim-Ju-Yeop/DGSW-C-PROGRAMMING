// 22. while���� ����Ͽ� �Է¹��� �������� 1���� ����ϴ� ���α׷�
#include <stdio.h>
int main(void)
{
	int num;
	printf("������ �Է����ּ��� : ");
	scanf_s("%d", &num);
	int i = num;
	while (i>0)
	{
		printf("%d ", i);
		i--;
	}

}