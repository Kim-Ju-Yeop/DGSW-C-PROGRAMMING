// 38. ����ڷκ��� ���ܾ �Է¹޾� �Է¹��� ���ܾ��� ���̸� ����Ͽ� ����ϴ� ���α׷��� �ۼ�����.
#include <stdio.h>
int main(void)
{
	char str[50];
	char len = 0;

	printf("���ܾ �Է����ּ��� : ");
	scanf_s("%s", str,sizeof(str));


	while (str[len] != '\0')
	{
		len++;
	}

	printf("�Է��Ͻ� ���ܾ��� ���̴� : %d",len);

}