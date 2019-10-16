// 2차원 배열 
// 예제 1
#include <stdio.h>
int main()
{
	int villa[4][2]; // [4] : 행 [2] : 열
	int popu, i, j; // popu : 한 층의 인구 수를 저장하는 역할을 한다.
	                // i : 행을 반복하는 반복문이다. j : 열을 반복하는 반복문이다.


	// 가구별 거주인원 입력받기 //
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d층 %d호 인구수 : ", i + 1, j + 1);
			scanf("%d", &villa[i][j]);
		}
		printf("\n");
	}

	// 빌라의 층별 인구수 출력하기 //
	for (i = 0; i < 4; i++)
	{
		popu = 0;
		popu += villa[i][0];
		popu += villa[i][1];
		printf("%d 층 인구수 : %d\n", i + 1, popu);
		
	}
	return 0;
}
