/* ���� 1)
   A�迭�� 10���� ������ �Է¹޾� B �迭�� A�迭���� �Է¹��� ������ �Ųٷ� �����Ͽ� B �迭�� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. */

#include <stdio.h>
int main()
{
	int arr1[10];
	int arr2[10];
	int i;
	int j = 0;

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr1[i]);
	}

	for (i = 9; i >= 0; i--)
	{
		arr2[j] = arr1[i];
		j++;
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr2[i]);
	}
}