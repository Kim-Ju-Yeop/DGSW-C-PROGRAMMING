// 24. 100 ������ ���� ������ �Էµ� �� 1���� �Է¹��� ���������� ���� ���Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
#include <stdio.h>
int main(void)
{
	int num;
	int i;
	int total = 0;
	printf("100 ������ ���� ������ �Է����ּ��� : ");
	scanf_s("%d", &num);
	for (i = 1; i <= num; i++)
	{
		total += i;
	}
	printf("�հ� : %d", total);
}