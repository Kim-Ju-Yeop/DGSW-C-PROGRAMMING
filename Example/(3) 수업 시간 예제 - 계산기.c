// if���� ����� ����
#include <stdio.h>
int main(void)
{
	int num, num1, num2 = 0; // num1 �� 4�� �� ���ÿ뵵 num1 �� num2�� �� ���� �뵵
	printf("1. ���� 2. ���� 3. ���� 4. ������ �� �����ϼ��� ");
	scanf("%d", &num);

	printf("�Է��Ͻ� �� ������ �Է��ϼ��� : "); 
	scanf("%d %d", &num1, &num2);
	if (num == 1) // num ���� 1�϶��� ���� �����Ѵ�.
	
		printf("���� ����� : %d", num1 + num2);

	if (num == 2) // num ���� 2�϶��� ���� �����Ѵ�.

		printf("���� ����� : %d", num1 - num2);

	if (num == 3) //num ���� 3�϶��� ���� �����Ѵ�.
		printf("���� ����� : %d", num1 * num2);

	if (num == 4) // num ���� 4�϶��� ���� �����Ѵ�.
		printf("������ ����� : %d", num1 / num2);

	return 0;

	
}