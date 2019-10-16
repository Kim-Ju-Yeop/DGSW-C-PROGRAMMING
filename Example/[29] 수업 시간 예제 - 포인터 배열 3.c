// 포인터 배열
// 예제 3
#include <stdio.h>
int main()
{
	int arr[3] = { 15,25,35 }; // int형이고 3의 크기를 가진 arr변수를 선언과 동시에 15,25,35로 초기화한다 
	int * ptr = &arr[0]; // 포인터 ptr을 선언과 동시에 arr[0]번째 주소값을 가져온다.

	printf("%d %d \n", ptr[0], arr[0]); // ptr[0]번째 값과 arr[0]번째 값을 출력한다
	printf("%d %d \n", ptr[1], arr[1]);
	printf("%d %d \n", ptr[2], arr[2]);
	printf("%d %d \n", *ptr, *arr); // *ptr이 가르키고 있는 값을 출력한다. *arr가 가르키고 있는 값을 출력한다
									// 둘다 arr[0]을 가르키고있다.


}
