// 70. int형 변수 input을 선언하여 정수를 입력받아 포인터 변수 ptr1 과 ptr2를 선언하여 가르키게 합니다.
// 포인터 변수 ptr1을 사용해서 값을 2배 증가시킨 후 출력을하십시오.
// 포인터 변수 ptr2를 사용해서 값을 2배 감소시킨 후 출력을 하십시오.
#include <stdio.h>
int main()
{
	int input;
	int * ptr1 = &input;
	int * ptr2 = &input;

	printf("정수를 입력해주세요 : ");
	scanf("%d", &input);

	printf("input : %d\n", input);

	*ptr1 *= 2;

	printf("ptr1 : %d\n", *ptr1);

	*ptr2 /= 2;

	printf("ptr2 : %d\n", *ptr2);

}
