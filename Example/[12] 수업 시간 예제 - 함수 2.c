// �Լ� ���� 2
#include <stdio.h>

int Add(int num1, int num2) // �������� (O) ��ȯ�� (O)
{
	return num1 + num2;
}

void showAddResult(int num) // �������� (O) ��ȯ�� (X)
{
	printf("������� ��� : %d\n", num);
}

int ReadNum(void) // �������� (X) ��ȯ�� (O)
{
	int num;
	scanf("%d", &num);
	return num;
}

void HowToUseThisProg(void) // �������� (X) ��ȯ�� (X)
{
	printf("�� ���� ������ �Է��Ͻø� ��������� ��µ˴ϴ�. \n");
	printf("��! �׷� �ΰ��� ������ �Է����ּ���. \n");
}

int main(void)
{
	int result, num1, num2;
	HowToUseThisProg(); // HowToUseThisProg �Լ��� �̵��� �ؼ� �����Ѵ�.
	num1 = ReadNum(); // num1 �� ReadNum �Լ��� �ʱ�ȭ �ϸ鼭 ReadNum���� �̵��� �����Ѵ�.
	num2 = ReadNum(); // num2 �� ReadNum �Լ��� �ʱ�ȭ �ϸ鼭 ReadNum���� �̵��� �����Ѵ�.
	result = Add(num1, num2); // Add �Լ��� �̵����Ͽ� �Է� ���� num1�� num2�� ����Ͽ� ����� �϶�� Add �Լ��� �̵��Ѵ�.
	showAddResult(result); // showAddResult �Ϲ��� �̵��Ͽ� �����Ѵ�.
	return 0;
}
