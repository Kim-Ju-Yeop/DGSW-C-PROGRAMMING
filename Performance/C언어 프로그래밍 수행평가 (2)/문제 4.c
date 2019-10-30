/* 문제 4)
   각각의 기능을 하는 함수를 만들어 은행관리 프로그램을 만들어라. 
   잔액 조회 함수, 입금 함수, 출금 함수, 종료 4가지의 기능을 만들어라.
   1 에서 3 번을 선택 시 반복문을 통해 계속 진행을 하며 4번을 선택시 종료 하도록 제작하라. */

// 잔액 조회 함수
int balance(int money)
{
	printf("잔액조회를 선택하셨습니다.\n");
	printf("현재잔액 : %d\n", money);
	printf("\n");
	
	return money;
}

// 입금 함수
int deposit(int money)
{
	int num;
	printf("입금을 선택하셨습니다.\n");
	printf("입금할 금액 : ");
	scanf("%d", &num);
	money += num;
	printf("현재잔액 : %d\n", money);
	printf("\n");

	return money;
}

// 출금 함수
int withdraw(int money)
{
	int num;
	printf("인출을 선택하셨습니다.\n");
	printf("입금할 금액 : ");
	scanf("%d", &num);
	money -= num;
	printf("현재잔액 : %d", money);
	printf("\n");

	return money;
}

int main(void)
{
	int select;
	int money = 0;
	int i = 0;

	printf("1: 잔액조회\n");
	printf("2: 입금\n");
	printf("3: 출금\n");
	printf("4: 종료\n");
	printf("\n");
	printf("선택 : ");

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
			printf("종료합니다."); 
			break;
		
			
		}

		default:
		{
			printf("잘못입력하셨습니다. 종료합니다.");
			break;
			
		}

		}
	
	} while (i != 0);
}