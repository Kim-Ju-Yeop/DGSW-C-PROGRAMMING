// �迭 1
// �迭�� �ʱ�ȭ
#include <stdio.h>
int main()
{
	int arr[5]; // arr ������ 5�� �����Ѵ�. // int arr[5] = { 10,20,30,40,50 }; �� �ȴ�.
	int sum = 0;
	int i;

	arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40, arr[4] = 50;

	for (i = 0; i < 5; i++)
	{
		sum += arr[i]; // arr[i] �� ���� ���������� �ε��� ���� �ö󰡸鼭 sum ������ ������ ������.
	}

	printf("�迭��ҿ� ����� ���� �� : %d\n", sum);
	return 0;
}