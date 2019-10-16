// 43. switch문을 사용하여 4가 출력되기 전까지 계속 반복하게 만들어라
#include <stdio.h>
int main()
{
	int num = 0;
	int i = 0;
	
	while (num != 4)
	{
		printf("1 : 고양이\n");
		printf("2 : 강아지\n");
		printf("3 : 토끼\n");
		printf("좋아하는 동물은 : ");
		scanf("%d", &num);

		switch (num)
		{
		case 1:
			printf("ㅡ> 고양이\n");
			printf("\n");
			break;
		case 2:
			printf("ㅡ> 강아지\n");
			printf("\n");
			break;
		case 3:
			printf("ㅡ> 토끼\n");
			printf("\n");
			break;
		case 4:
			printf("error\n");
			printf("\n");
			break;
		}
		
		i++;
	}
	
}
