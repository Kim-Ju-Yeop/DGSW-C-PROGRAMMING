// 26. �ڿ��� n�� �Է¹޾Ƽ� ������ ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�
#include <stdio.h>
int main(void)
{
	int num; // �� ���� �Է¹��� ���� num
	int i; // �ݺ��� ������ ���� i
	int j; // ���� ����� ������ j
	printf("�ڿ����� �Է����ּ��� : ");
	scanf_s("%d", &num);

	for (i = 1; i <= num; i++) //
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");

		}
		printf("\n");
	}
}