// �迭 3
// �迭 ���� ����ϱ�
#include <stdio.h>
int main()
{
	char voca[] = { 'G','O','O','D',' ','T','I','M','E' }; // voca ������ ������ �ʱ�ȭ�����ش�.
	int i;

	// �ʱ�ȭ ��Ų ������ �ݺ������� ����� for���̴�.
	for (i = 0; i < sizeof(voca) / ; i++) // sizeof(voca) �ڸ��� 9�� �־ �ȴ�.
	{
		printf("%c", voca[i]);
	}
}