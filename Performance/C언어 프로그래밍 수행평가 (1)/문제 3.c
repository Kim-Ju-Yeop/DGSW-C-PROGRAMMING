/* ���� 3)
   do ~ while���� ����Ͽ� ������ �����ϴ� ���α׷��� �ۼ��ϰ��� �մϴ�. ��ĭ�� ä�� ���α׷��� �ϼ��Ͻÿ�
   ( answer ����, guess ����, tries ����) �� ����Ͻʽÿ�. */

#include<stdio.h>
int main() {
	int answer = 59;        
	int guess;             
	int tries = 0;            
 

	do {
		 printf("������ �����Ͽ� ���ÿ�: ");
		 scanf("%d",&guess);
		 
		 if (guess > answer)
		 {
			 printf("������ ������ �����ϴ�.\n");
		 }

		 if (guess < answer)
		 {
			 printf("������ ������ �����ϴ�.\n");
		 }

		 tries++;
		                                            
} while (guess!=answer);

	   printf("�����մϴ�. �õ�Ƚ��=%d",tries);

	return 0;
}