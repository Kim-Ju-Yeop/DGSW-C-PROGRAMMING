// 44. 1부터 입력받은 수까지의 정수 중에서 5의 배수를 제외한 모든 홀수를 출력하는 프로그램을 작성하시오. 단 1행에 4개씩 출력하시오 (continue,삼 항 연산자)- 삼항연산자 안쓴 방법
// continue 방법 안쓴 것
#include <stdio.h>
int main()
{
	int num = 0;
	printf("정수를 입력해주세요 : ");
	scanf("%d", &num);
	
	int i;
	int g = 0;

	for (i = 1; i <= num; i++)
	{
		if (i % 5 != 0 & i%2!=0)
		{
			if (g %4 == 0)
				printf("\n");
			printf("%10d ", i);
			g++;
		}
	}
}

// continue 방법을 쓴 것
#include <stdio.h>
int main()
{
	int num = 0;
	printf("정수를 입력해주세요 : ");
	scanf("%d", &num);

	int i;
	int g = 0;

	for (i = 1; i <= num; i=i+2)
	{
		if (i % 5 == 0)
		{
			continue;
		}
			(g % 4 == 0) ? printf("\n") : " ";

			printf("%3d ", i);
			g++;
	}
}
