// 21. while ���� ����Ͽ� 1���� �Է¹��� �������� ���ʷ� ����ϴ� ���α׷�
#include <stdio.h>
int main(void)
{
	int num;
	int i = 1;
	printf("������ �Է����ּ��� : ");
	scanf_s("%d", &num);

	while (i <= num)
	{
		printf("%d ", i);
		i++;
	}

}