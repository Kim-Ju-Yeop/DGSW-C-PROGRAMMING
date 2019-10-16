// 72. void second 라는 함수를 작성하여 main 함수에서 second 함수로 input1 과 input2의 주소를 전달하여 그 주소에 해당하는 값을 두 배로 증가시키고 두 배를 감소시켜
// main 함수에서 input1 과 input2의 값을 출력하는 프로그램을 작성하시오.
#include <stdio.h>
void second (int * ptr1, int* ptr2)
{
	*ptr1 *= 2;
	*ptr2 /= 2;

}

int main()
{
	int input1;
	int input2;
	
	printf("정수를 입력해주세요 : ");
	scanf("%d %d", &input1, &input2);

	second(&input1, &input2);

	printf("input1 : %d\ninput2 : %d", input1, input2);
}
