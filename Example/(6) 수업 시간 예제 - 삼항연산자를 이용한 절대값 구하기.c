// 삼항연산자를 이용한 예제 - 삼항연산자는 조건문이 아니라 연산자 이기 때문에 abs변수가 필요하다.
#include <stdio.h>
int main()
{
	int num, abs; // num은 정수를 입력받을 변수이고 abs는 삼함연산자를 계산할 변수가 된다.
	printf("정수를 입력해주세요 : ");
	scanf("%d", &num);

	abs = num > 0 ? num : num * (-1); // num이 0보다 크면 num(참)이 출력되고 num이 0보다 작으면 num * (-1)(거짓) 이 출력된다.
	printf("절대값 : %d\n", abs);
	return 0;
}
// 삼항연산자에서 num > 0? 이부분에서 ?를 적지 않을시 오류(error)가 작동한다.