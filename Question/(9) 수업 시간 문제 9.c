// 9. 2x2 , 4x4 , 6x6 , 8x8 �� �� ����ϵ��� �Ͽ���.
#include <stdio.h>
int main(void)
{
	int dan, num; // dan �� �� num �� ���ϴ� ���̴�.

	for (dan = 1; dan < 10; dan++) // dan �������ٰ� 1�� �ʱ�ȭ �����ְ� for ���� �����Ѵ�.
	{
		if (dan % 2 != 0) // dan�� �����ٰ� 2�� ������������ 0�� �ȳ����� continue���� �����Ѵ�.
			continue;
		for (num = 1; num < 10; num++) // ���� for���� ����Ͽ� ���ϴ� �� num�� ���� ���������ش�.
		{
			if (dan < num) // num�� ���� dan�� ������ �� Ŀ���� break ���� �����Ѵ�.
				break;
			printf("%d X %d = %d\n", dan, num, dan*num);
		}
	}
	printf("\n");
	return 0;
}