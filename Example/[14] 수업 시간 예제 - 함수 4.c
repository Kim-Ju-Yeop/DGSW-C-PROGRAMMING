
// �Լ� ���� 4
// �پ��� ������ �������� ����
#include <stdio.h>
int main(void)
{
	int cnt;
	for (cnt = 0; cnt < 3; cnt++)
	{
		int num = 0; // �������� num ����� ���ÿ� 0�� �ʱ�ȭ
		num++;
		printf("%d��° �ݺ�, �������� num�� %d.\n", cnt + 1, num);
	} // �������� num �� �������.

	if (cnt == 3)
	{
		int num = 7; // �������� num ����� ���ÿ� 7�� �ʱ�ȭ
		num++;
		printf("if�� ���� �����ϴ� �������� num�� %d.\n", num);
	} // �������� num �� �������.
	return 0;
}