// 10. switch �� - �����Է�
#include <stdio.h>
int main()
{
	char num;
	printf("M ����, A ����, E ���� \n");
	printf("�Է�: ");
	scanf("%c",&num); // num�� ���ڸ� �Է¹޴´�.

	switch (num)
	{
	case 'M':
	case 'm':
		printf("Morning\n");
		break;
	case 'A':
	case 'a':
		printf("Afternoon\n");
		break;
	case 'E':
	case 'e':
		printf("Evening\n");
		break;
	}
	return 0;
}