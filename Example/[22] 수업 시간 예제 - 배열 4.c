// �迭 4
// Null ���ڿ� ���ؼ� �˾ƺ���
#include <stdio.h>
int main(void)
{
	char str[] = "Good morning!";
	printf("�迭 str�� ũ�� : %d\n", sizeof(str)); // str�� ũ��� 14�̴�.
	printf("�� ���� ������ ��� : %c\n", str[13]); // �� ������ �������� ����� ���� �ʴ´�.
	printf("�� ���� ������ ��� : %d\n", str[13]); // �� ������ �������� 0 �̴�.

	str[12] = '?'; // str[12] �� �� ! �� ?�� �Ҵ��Ѵ�.
	printf("���ڿ� ��� : %s\n", str);
	return 0;
}