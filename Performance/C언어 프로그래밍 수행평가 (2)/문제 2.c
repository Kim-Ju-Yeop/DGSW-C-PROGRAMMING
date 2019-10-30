/* 문제 2) 실수를 사용하여 키, 몸무게를 입력받아 BMI를 구하는 프로그램을 작성하시오.
   BMI 지수를 구하는 공식은 = 몸무게 / (키 X 키) 입니다.
   if ~ else 문을 사용하여 프로그램을 작성하시오. */

#include <stdio.h>
int main()
{
	double height;
	double weight;
	double bmi;

	scanf("%lf", &height);
	scanf("%lf", &weight);

	bmi = weight / (height * height);

	printf("키(m) : %g\n", height);
	printf("몸무게(kg) : %g\n", weight);
	printf("\n");
	printf("BMI 지수 : %.2lf\n", bmi);

	if (bmi <= 18.5)
	{
		printf("BMI : 저체중입니다.");

	}
	else if (18.5 < bmi <= 23)
	{
		printf("BMI : 정상입니다.");

	}
	else if (23 < bmi <= 25)
	{
		printf("BMI : 과체중입니다.");

	}
	else if (25 < bmi <= 30)
	{
		printf("BMI : 비만입니다.");

	}
	else
	{
		printf("BMI : 고도비만입니다.");
	}

}