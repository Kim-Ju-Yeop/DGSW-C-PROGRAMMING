// �迭 2
// �迭�� �ʱ�ȭ ��� 
#include <stdio.h>
int main(void)
{
	int arr1[5] = { 1,2,3,4,5 };
	int arr2[] = { 1,2,3,4,5,6,7 };
	int arr3[5] = { 1,2 }; // �ʱ�ȭ ���� �ʴ��� 0���� �ʱ�ȭ�ȴ�. ������ { } ������ �ȴ�.
	int ar1len, ar2len, ar3len, i;

	printf("�迭 arr1�� ũ�� : %d\n", sizeof(arr1));
	printf("�迭 arr2�� ũ�� : %d\n", sizeof(arr2));
	printf("�迭 arr3�� ũ�� : %d\n", sizeof(arr3));

	// �迭�� ���̸� ����Ѵ�.
	ar1len = sizeof(arr1) / sizeof(int); // arr1�� ũ��� 5 X 4 = 20 int �� ũ��� 4 �̹Ƿ� �迭�� ���̴� 5
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

// 8�� ���׿��� �̷��� �ʱ�ȭ�� ��Ű�� �����Ⱚ�� ��µȴ�.
// �� { } �ȿ� �ʱ�ȭ�� �ҽÿ��� 0�� ��µȴ�.
/*#include <stdio.h>
int main()
{
	int arr[5];
	arr[0] = 1, arr[1] = 2, arr[2], arr[3], arr[4];
	printf("%d",arr[3]);
}*/
