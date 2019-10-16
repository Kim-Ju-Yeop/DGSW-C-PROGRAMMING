// 40. 포인터 변수 ptr1이 num2의 주소값을 가르키게 하고 ptr2가 num1의 주소값을 가리키게 출력하라
#include <stdio.h>
int main()
{
	int * temp; // 값을 바꾸는 변수
	int num1 = 10;
	int num2 = 20;
	
	int* ptr1 = &num1; // ptr1 을 int형을 가르키는 변수로 선언과 동시에 num1의 주소값을 가져온다. 
	int* ptr2 = &num2; // ptr2 를 int형을 가르키는 변수로 선언과 동시에 num2의 주소값을 가져온다.

	(*ptr1) += 10; // ptr1에 가리키는 곳 주소의 값을 10증가시킨다. 즉 num1의 값을 10증가시킨다.
	(*ptr2) -= 10; // prt2에 가리키는 곳 주소의 값을 10감소시킨다. 즉 num2의 값을 10감소시킨다.

	temp = *ptr1; // temp 값에 ptr1이 가리키는 주소값으로 할당한다. temp = num1의 주소값
	*ptr1 = *ptr2; // ptr1이 가르키는 주소값을 ptr2가 가르키는 주소값으로 할당한다. ptr1 = num2의 주소값
	*ptr2 = temp; // ptr2가 가르키는 주소값을 temp가 가르키는 주소값으로 할당한다. ptr2 = num1의 주소값

	printf("ptr1 = %d\nptr2 = %d", *ptr1, *ptr2);
	
}
/////////////////////////
//     * 가리키다     ///
//     & 가져오다     ///
/////////////////////////