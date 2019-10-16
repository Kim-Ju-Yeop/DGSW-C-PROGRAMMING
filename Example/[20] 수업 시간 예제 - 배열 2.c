// 배열 2
// 배열의 초기화 방법 
#include <stdio.h>
int main(void)
{
	int arr1[5] = { 1,2,3,4,5 };
	int arr2[] = { 1,2,3,4,5,6,7 };
	int arr3[5] = { 1,2 }; // 초기화 되지 않더라도 0으로 초기화된다. 하지만 { } 구문만 된다.
	int ar1len, ar2len, ar3len, i;

	printf("배열 arr1의 크기 : %d\n", sizeof(arr1));
	printf("배열 arr2의 크기 : %d\n", sizeof(arr2));
	printf("배열 arr3의 크기 : %d\n", sizeof(arr3));

	// 배열의 길이를 계산한다.
	ar1len = sizeof(arr1) / sizeof(int); // arr1의 크기는 5 X 4 = 20 int 의 크기는 4 이므로 배열의 길이는 5
	ar2len = sizeof(arr2) / sizeof(int);
	ar3len = sizeof(arr3) / sizeof(int);

	for (i = 0; i < ar1len; i++)
	{
		printf("%d ", arr1[i]);
	}
		printf("\n");


	for (i = 0; i < ar2len; i++)
	{
		printf("%d ", arr2[i]);
	}
		printf("\n");


	for (i = 0; i < ar3len; i++)
	{
		printf("%d ", arr3[i]);
	}
		printf("\n");

	return 0;
}

// 8번 문항에서 이렇게 초기화를 시키면 쓰레기값이 출력된다.
// 즉 { } 안에 초기화를 할시에만 0이 출력된다.
/*#include <stdio.h>
int main()
{
	int arr[5];
	arr[0] = 1, arr[1] = 2, arr[2], arr[3], arr[4];
	printf("%d",arr[3]);
}*/
