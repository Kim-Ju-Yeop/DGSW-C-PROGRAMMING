// 2. 실수를 입력받아 cm 로 출력하는 프로그램을 작성해주십시오.
// cm 구하는 공식은 91.44를 곱하십시오.
#include <stdio.h>
int main()
{
	float num;
	scanf("%f", &num);
	printf("%5.1fcm", num*91.44);
}
