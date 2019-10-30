/*문제 1)
  입력받은 값에 x4와 /2를 수행하는 계산기 프로그램을 개발하고자 한다.
  (단, 1. 연산자는 비트연산자만을 사용한다.  
       2. 입력받을 값은 입력함수를 사용하여 받는다.
       3. /2 를 수행시 소수점 이하는 버린다.
       4. 정수를 출력하되, 선언한 변수 3개를 이용하여 출력한다.)*/

#include <stdio.h>
int main()
{
	int input;
	int mul;
	double div;

	printf("나누기와 곱하기 할 값을 입력하세요,\n입력받을 값 : ");
	scanf("%d", &input);

	mul = input << 2;
	div = input >> 1;

	printf("%d의 x4의 결과는 : %d\n", input, mul);
	printf("%d의 /2의 결과는 : %g\n", input, div);
}