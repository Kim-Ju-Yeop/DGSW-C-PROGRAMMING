// 25. 100 ������ ������ �Է¹��� �������� 100������ ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�
#include <stdio.h>
int main(void)
{
	int num;
	int i;
	int total = 0;
	printf("100 ������ ������ �Է����ּ��� : ");
	scanf_s("%d", &num);
	for (i = num; i <= 100; i++)
	{
		total += i;
	}
	printf("�հ� : %d", total);
}