/* ���� 3) ���� A, B, C, D �߿��� �Է��� �޾� ���θ� �ϸ� A ���� ������ �ö󰡴� ���α׷��� �ۼ��϶�.
   ��) �Է� : D -> C -> B -> A */

#include <stdio.h>
int main()
{

	char grade;
	char * pgrade = &grade;

	scanf("%c", &grade);

	printf("%c\n", grade);


	while (*pgrade != 65)
	{
		*pgrade -= 1;
		printf("�����߽��ϴ� -> ���� : %c\n", *pgrade);

	}



}