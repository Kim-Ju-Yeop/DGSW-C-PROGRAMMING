// break ��
#include <stdio.h>
int main(void)
{
	int sum = 0, num = 0; // sum ������ num ������ 0���� �ʱ�ȭ �����ش�.

	while (1) // while���� ������ �� ���ǹ��̴�. ���ѹݺ�
	{
		sum += num; // sum ������ num���� �����ش�.
		if (sum > 5000) // if���� ������ sum ������ 5000�̻��� �ɶ� ���ǹ��� break �Ѵ�.
			break; // sum�� 5000�� �Ǳ������� num ���� ��� �����Ѵ�.
		num++;
	}

	printf("sum : %d\n", sum); 
	printf("num : %d\n", num);
	return 0;
}