// �Լ� ���� 1
#include <stdio.h>

int Add(int num1, int num2) // Add��� �Լ� �̸��� ���� �Լ��� �����Ѵ�. // ���������� num1 �� num2 �� �������ش�.
{
	return num1 + num2; // return ��ȯ���� num1�� num2�� ���϶�� �����Ѵ�.
}

int main(void)
{
	int result;
	result = Add(3, 4);
	printf("�������1 : %d\n", result);
	result = Add(5, 8);
	printf("�������2 : %d\n", result);
	return 0;

}