// �Լ� ���� 7 
// static �Լ�
#include <stdio.h>

void SimpleFunc(void) // simpleFunc ��� �̸��� ���� �Լ� ����
{
	static int num1 = 0; // static �Լ� ���� �� �ʱ�ȭ // �ʱ�ȭ�� ���� �ʾƵ� �ڵ����� �ʱ�ȭ�ȴ�.
	int num2 = 0;
	num1++; 
	num2++;
	printf("static : %d, local : %d\n", num1, num2);
}

int main(void)
{
	int i;
	for (i = 0; i < 3; i++)
		SimpleFunc(); // SimpleFunc �Լ��� �̵�.
	return 0;
}