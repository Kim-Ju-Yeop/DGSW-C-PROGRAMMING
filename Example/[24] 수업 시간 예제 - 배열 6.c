// �迭 6
// ��� ���� ����� �������� �˾ƺ���
#include <stdio.h>
int main(void)
{
	char str[50]; // str ������ ũ�⸦ 50���� �˳��� �������ش�.
	int idx = 0; // while ������ ����� �����̴�.

	printf("���ڿ� �Է� : ");
	scanf_s("%s", str, sizeof(str));
	printf("�Է� ���� ���ڿ� : %s\n", str);

	printf("���� ���� ��� : ");
	// str[] ���� �� ���� �ɶ� ���α׷��� ����ȴ�.
	while (str[idx] != '\0')
	{
		printf("%c", str[idx]);
		idx++;
	}
	printf("\n");
	return 0;
}