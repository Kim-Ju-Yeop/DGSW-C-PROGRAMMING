// �Լ� ���� 5
#include <stdio.h>
int main(void)
{
	int num = 1; // ���������� �Ͼ�� ������ ����ΰ� 9��°�ٺ��� 12��°�ٱ��� ���� ������.

	if (num == 1)
	{
		int num = 7; // �������� num ����� ���ÿ� 7�� �ʱ�ȭ�Ѵ�. 
		num += 10;
		printf("if�� �� �������� num : %d \n", num);
	} // num ���� �Ҹ�ȴ�.
	
	printf("main �Լ� �� �������� num : %d \n", num); // main �Լ��� ���� 1�̴�.
	return 0;
}