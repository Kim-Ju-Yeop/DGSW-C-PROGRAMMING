// ������ 1
// ������ �ʱ�ȭ�� �� ���� 
#include <stdio.h>
int main(void)
{
	int num1 = 100, num2 = 100;
	int* pnum; // pnum �����͸� �����Ѵ�.

	pnum = &num1; // pnum�� num1�� �ּҰ��� �����´�.
	(*pnum) += 30; // pnum�� ����Ű�� ���� 30�� ���Ѵ�.

	pnum = &num2; // pnum�� num2�� �ּҰ��� �����´�.
	(*pnum) -= 30; // pnum�� ����Ű�� ���� 30�� ����.

	printf("num1 : %d, num2 : %d\n", num1, num2);
	return 0;
}