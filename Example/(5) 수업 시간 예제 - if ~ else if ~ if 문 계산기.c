// if ~ else if ~ else ���� ����Ͽ� ���⸦ ����غ���.
#include <stdio.h>
int main()
{
	int num, num1, num2; // num�� 4���� ������ �޴� �����̰� num1�� num2�� ������ �Է¹޴� �����̴�.


	printf("1. ���� 2. ���� 3. ���� 4. ������ �� �����Ͻʽÿ�");
	scanf("%d", &num);
	printf("�� ������ �Է����ּ���");
	scanf("%d %d", &num1, &num2);

	if (num == 1) // num�� 1�϶� ������ �����Ѵ�
		printf("���� ��� : ", num1 + num2);
	else if (num == 2) // num�� 2�϶� ������ �����Ѵ�
		printf("���� ��� : ", num1 - num2);
	else if (num == 3) // num�� 3�϶� ������ �����Ѵ�
		printf("���� ��� : ", num1 * num2);
	else if (num == 4) // num�� 4�϶� ������ �����Ѵ�
		printf("������ ��� : ", num1 / num2);
	else // num�� 1,2,3,4 �� �ƴϰ� �ٸ� �� �϶� ������ ����ȴ�.
		printf("����Ҽ� �����ϴ�.");
	return 0;
}