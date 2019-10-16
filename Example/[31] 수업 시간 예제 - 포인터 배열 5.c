// 포인터 배열
// 예제 5
#include <stdio.h>
int main(void)
{
	int arr[3] = { 11,22,33 };
	int * ptr = arr;
	printf("%d %d %d \n", *ptr, *(ptr + 1), *(ptr + 2));

	printf("%d ", *ptr); ptr++;
	printf("%d ", *ptr); ptr++;
	printf("%d ", *ptr); ptr--;
	printf("%d ", *ptr); ptr--;
	printf("%d", *ptr);

	return 0;
}

// Arr[i] == *(arr+i) 
