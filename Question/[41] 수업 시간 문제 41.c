// 41. ����ڷκ��� ��(Second)�� �Է¹޾� [��,��,��] �� ���·� ����ϴ� ���α׷��� �ۼ��Ͻÿ�
#include <stdio.h>
int main()
{
	int num;
	int h, m, s;
	printf("��(Second)�� �Է����ּ���\n");
	scanf_s("%d", &num);

	h = num / 3600;
	m = num % 3600 / 60;
	s = num % 60;

	printf("[h : %d, m = %d, s : %d]",h,m,s);

}