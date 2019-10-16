// 74. 출력 예와 같이 어떤 두 수를 입력받은 후 두 수 사이의 구구단을 모두 출력하여라.
// 각각의 구구단의 사이에는 4칸이 띄어져야하며, 같은 열에서 시작해야함.
#include <stdio.h>
int one(int input1, int input2)
{
	int i; // 곱하는 수
	int j; // 단을 의미한다.

	// 곱하는 수를 반복하는 반복문이다.
	for (i = 1; i <= 9; i++)
	{
		// 단을 반복하는 반복문이다.
		for (j = input1; j <= input2; j++)
		{
			printf("%d X %d = %2d", j, i, j*i);
			printf("    ");
		}
		printf("\n");
	}

	
}

int main()
{
	int input1, input2;
	printf("두 개의 정수를 입력해주세요 : ");
	scanf("%d %d", &input1, &input2);

	one(input1, input2);
}
