/* ���� 4)
   1 ���� 30������ ���� ����Ͽ��� �� 3�� ����� "three". 5�� ����� "fiva" 3�� ����̸鼭 5�� ����� ���� "three&five" ��� �����ڰ� ��µǵ��� �Ͻʽÿ�.
   �ݵ�� for���� if ~ else ���� ����Ͻÿ�. */

#include<stdio.h>
int main() {
	
	int i; 
	for (i = 1; i <= 30; i++)
	{

		if (i % 3 == 0 && i % 5 == 0)
		{
		printf("three&five\n");
		}

		else if (i % 3 == 0)
		{
			printf("three\n");
		}

		else if (i % 5 == 0)
		{
			printf("five\n");
		}

		
		
		else
			printf("%d\n", i);
	}




	return 0;
	
}