// 8. 국어 영어 수학 점수의 평균을 구해서 90점 이상은 A 80점 이상은 B 70점 이상은 C 60점 이상은 D 그 이하는 F를 출력하도록 하십시오.
#include <stdio.h>
int main()
{	
	int num;
	int a, b, c;
	printf(" 국어 영어 수학 점수를 입력해주세요 :  ");
	scanf("%d %d %d", &a, &b, &c);
	num = (a + b + c) / 3;
	if (num >= 90)
		printf("A");
	else if (num >= 80)
		printf("B");
	else if (num >= 70)
		printf("C");
	else if (num >= 60)
		printf("D");
	else
		printf("F");

	return 0;

}
