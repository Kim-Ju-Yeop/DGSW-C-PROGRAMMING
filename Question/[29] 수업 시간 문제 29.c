// 29. static ������ Ȱ��
#include <stdio.h>

int AddTotal(int num) // �Է¹��� num ���� ����Ѵ�.
{	
	static total; // static total ���� // �ʱ�ȭ�� ���� �ʾƵ� static �Լ��� �ڵ����� 0���� �ʱ�ȭ�ȴ�.
	total += num;
	return total; // total ���� ��ȯ�Ѵ�.
}

int main(void)
{
	int num, i; // �������� ����
	for (i = 0; i < 3; i++)
	{
		printf("�Է�%d : ", i + 1);
		scanf_s("%d", &num);
		printf("���� : %d\n", AddTotal(num)); // AddTotal �Լ��� �̵� �Ͽ� ���
	}
	return 0;
}