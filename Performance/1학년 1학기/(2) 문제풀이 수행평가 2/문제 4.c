/* ���� 4)
   ������ ����� �ϴ� �Լ��� ����� ������� ���α׷��� ������. 
   �ܾ� ��ȸ �Լ�, �Ա� �Լ�, ��� �Լ�, ���� 4������ ����� ������.
   1 ���� 3 ���� ���� �� �ݺ����� ���� ��� ������ �ϸ� 4���� ���ý� ���� �ϵ��� �����϶�. */

// �ܾ� ��ȸ �Լ�
int balance(int money)
{
	printf("�ܾ���ȸ�� �����ϼ̽��ϴ�.\n");
	printf("�����ܾ� : %d\n", money);
	printf("\n");
	
	return money;
}

// �Ա� �Լ�
int deposit(int money)
{
	int num;
	printf("�Ա��� �����ϼ̽��ϴ�.\n");
	printf("�Ա��� �ݾ� : ");
	scanf("%d", &num);
	money += num;
	printf("�����ܾ� : %d\n", money);
	printf("\n");

	return money;
}

// ��� �Լ�
int withdraw(int money)
{
	int num;
	printf("������ �����ϼ̽��ϴ�.\n");
	printf("�Ա��� �ݾ� : ");
	scanf("%d", &num);
	money -= num;
	printf("�����ܾ� : %d", money);
	printf("\n");

	return money;
}

int main(void)
{
	int select;
	int money = 0;
	int i = 0;

	printf("1: �ܾ���ȸ\n");
	printf("2: �Ա�\n");
	printf("3: ���\n");
	printf("4: ����\n");
	printf("\n");
	printf("���� : ");

	scanf("%d", &select);

	do
	{
		switch (select)
		{
		case 1:
		{
			money = balance(money);
			i++;
			break;
			
		}

		case 2:
		{
			deposit(money);
			i++;
			break;
		}

		case 3:
		{
			withdraw(money);
			i++;
			break;
		}

		case 4:
		{
			printf("�����մϴ�."); 
			break;
		
			
		}

		default:
		{
			printf("�߸��Է��ϼ̽��ϴ�. �����մϴ�.");
			break;
			
		}

		}
	
	} while (i != 0);
}