// �迭 5
// null ������ ������ �˾ƺ���
#include <stdio.h>
int main(void)
{
	char str[50] = "I like C programming"; // str ������ ũ�⸦ 50���� �����ϰ� ���ڿ��� �ʱ�ȭ�� �ߴ�.
	printf("string : %s\n", str);

	str[8] = '\0'; // str[8] ���� �� ���ڸ� �����Ѵ�.
	printf("string : %s\n", str);

	str[6] = '\0'; // str[6] ���� �� ���ڸ� �����Ѵ�.
	printf("string : %s\n", str);

	str[1] = '\0'; // str[1] ���� �� ���ڸ� �����Ѵ�.
	printf("string : %s\n", str);
	return 0;
}