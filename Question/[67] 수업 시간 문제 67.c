// 67. point라는 int 형 배열을 선언하여 1부터 10까지 차례때로 저장한다. pi라는 int형 변수를 가리키는 포인터 변수를 선언하고 pi를 사용하여 배열의 합을 구하는 프로그램을 작성하시오.
#include <stdio.h>
int main()
{
	int point[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int * pi;
	pi = point; //&point[0]
	
	int sum = 0;
	int i;

	for (i = 0; i < 10; i++)
	{
		sum += pi[i];
	}
	printf("%d", sum);

}
