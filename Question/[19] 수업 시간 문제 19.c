// 19. 썹시 온도를 화씨 온도로 화씨 온도를 썹시 온도를 바꾸는 프로그램을 작성하시오
// 섭씨 온도를 화씨로 바꾸는 공식은 num = 1.8 * num +32 입니다.
#include <stdio.h>

double CelToFah(double num)
{
	num = 1.8 * num + 32;
	return num;
}

double FahToCel(double num)
{
	num = (num - 32) / 1.8;
	return num;
}

int main(void)
{
	double a = 0;
	double b = 0;
	int num;
	printf("1. 섭씨 2.화씨");
	scanf_s("%d", &num);

	switch (num)
	{
	case 1:
		scanf_s("%lf", &a);
		printf("섭씨를 화씨로 바꾸면 : %lf\n입니다.", CelToFah(a));
		break;
	case 2:
		scanf_s("%lf", &b);
		printf("화씨를 섭씨로 바꾸면 : %lf\n입니다.", FahToCel(b));
		break;
	}

}
