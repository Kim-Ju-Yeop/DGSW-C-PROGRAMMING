// 3. 실수 yd 값과 in 값을 입력받아 cm 로 출력하는 프로그램을 작성해주십시오.
// cm 구하는 공식은 91.44 입니다.
// in 구하는 공식은 2.54 입니다.
#include <stdio.h>
int main()
{
	float num1, num2;
	scanf("%f %f", &num1, &num2);
	printf("%7.1fyd = %7.1fcm\n",num1, num1*91.44);
	printf("%7.1fin = %7.1fcm", num2, num2*2.54);
}
