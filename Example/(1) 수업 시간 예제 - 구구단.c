// for �� ��ø �� <������>
#include <stdio.h>
int main()
{
	int a, b; // a�� "��" �� �ǹ��ϰ� b�� " ���ϴ� ��" �� �ǹ��Ѵ�.
	for (a = 2; a < 10; a++) // a�� 2�� �ʱ�ȭ �Ѵ�.
	{
		for (b = 1; b < 10; b++) // for�� �ȿ� for���� ��ø�Ѵ�.
		{
			printf("%d X %d = %d\n", a, b, a*b);
			
		}
		printf("\n"); // ĭ�� ����.
	}
	return 0;
}
