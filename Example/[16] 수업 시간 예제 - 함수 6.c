// �Լ� ���� 6
#include <stdio.h>
int Add(int val); 
int num = 1; // �������� num ����� ���ÿ� 1�� ����Ѵ�. // 7~11 15~18 ���������� �����.

int main(void)
{
	int num = 5; // �������� num ����� ���ÿ� 5�� �ʱ�ȭ �Ѵ�.
	printf("num : %d\n", Add(3)); // Add �Լ��� �̵����� ������ ��Ų��.
	printf("num : %d\n", num + 9); // num ���� 9�� ���� ��½�Ų��.
	return 0;
}

int Add(int val)
{
	int num = 9; // �������� num ����� ���ÿ� 9�� �ʱ�ȭ �Ѵ�.
	num += val; // num ���� �Է¹��� �� 3�� ���Ѵ�.
	return num; // num ���� ��ȯ�Ѵ�.
}