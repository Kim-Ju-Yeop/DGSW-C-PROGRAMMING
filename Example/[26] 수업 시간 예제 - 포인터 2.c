// ������ 2
// ����� ����� �����غ��� �����غ��ƶ�
#include <stdio.h>
int main(void)
{
	int num = 10;
	int* ptr1 = &num; // ptr1 ���� num�� �ּҰ��� �����϶�.
	int* ptr2 = ptr1; // prt2 ���� num�� �ּҰ��� ����Ų��.

	(*ptr1)++; // ptr1�� ����Ű�� num�� �� 10�� 1�� ������Ų��.
	(*ptr2)++; // ptr2�� ����Ű�� ptr1 �� num�� �� 11�� 1�� ������Ų��.
	printf("%d\n", num);
}