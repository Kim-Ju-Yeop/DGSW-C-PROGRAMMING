/* ���� 2) �Ǽ��� ����Ͽ� Ű, �����Ը� �Է¹޾� BMI�� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
   BMI ������ ���ϴ� ������ = ������ / (Ű X Ű) �Դϴ�.
   if ~ else ���� ����Ͽ� ���α׷��� �ۼ��Ͻÿ�. */

#include <stdio.h>
int main()
{
	double height;
	double weight;
	double bmi;

	scanf("%lf", &height);
	scanf("%lf", &weight);

	bmi = weight / (height * height);

	printf("Ű(m) : %g\n", height);
	printf("������(kg) : %g\n", weight);
	printf("\n");
	printf("BMI ���� : %.2lf\n", bmi);

	if (bmi <= 18.5)
	{
		printf("BMI : ��ü���Դϴ�.");

	}
	else if (18.5 < bmi <= 23)
	{
		printf("BMI : �����Դϴ�.");

	}
	else if (23 < bmi <= 25)
	{
		printf("BMI : ��ü���Դϴ�.");

	}
	else if (25 < bmi <= 30)
	{
		printf("BMI : ���Դϴ�.");

	}
	else
	{
		printf("BMI : �����Դϴ�.");
	}

}