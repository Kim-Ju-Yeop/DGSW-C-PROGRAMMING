// switch �� - �����Է� 
#include <stdio.h>
int main()
{
	int num;
	printf("1�̻� 5������ ���� �Է� : ");
	scanf("%d", &num);

	switch (num) // switch �� ����
	{
	case 1:
		printf("1�� one\n");
		break; // case �� 1�̸� break ���� �����Ѵ�.
	case 2:
		printf("2�� two\n");
		break; // case �� 2�̸� break ���� �����Ѵ�.
	case 3:
		printf("3�� three\n");
		break; // case �� 3�̸� break ���� �����Ѵ�.
	case 4:
		printf("4�� four\n");
		break; // case �� 4�̸� break ���� �����Ѵ�.
	case 5:
		printf("5�� five\n");
		break; // case �� 5�̸� break ���� �����Ѵ�.
	default: // 1���� 5���� �� ���ڰ� �ƴϸ� default ���� �����Ѵ�.
		printf("I don't know\n");
	  
	}
	return 0;
}

