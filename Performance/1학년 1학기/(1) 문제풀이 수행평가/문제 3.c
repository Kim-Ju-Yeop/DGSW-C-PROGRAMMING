/* 문제 3)
   do ~ while문을 사용하여 정답을 추측하는 프로그램을 작성하고자 합니다. 빈칸을 채워 프로그램을 완성하시오
   ( answer 변수, guess 변수, tries 변수) 를 사용하십시오. */

#include<stdio.h>
int main() {
	int answer = 59;        
	int guess;             
	int tries = 0;            
 

	do {
		 printf("정답을 추측하여 보시오: ");
		 scanf("%d",&guess);
		 
		 if (guess > answer)
		 {
			 printf("제시한 정수가 높습니다.\n");
		 }

		 if (guess < answer)
		 {
			 printf("제시한 정수가 낮습니다.\n");
		 }

		 tries++;
		                                            
} while (guess!=answer);

	   printf("축하합니다. 시도횟수=%d",tries);

	return 0;
}