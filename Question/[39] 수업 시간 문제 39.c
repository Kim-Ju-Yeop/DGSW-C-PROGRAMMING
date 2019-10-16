// 39. 사용자로부터 영단어를 입력 받아 아스키 코드의 값이 가장 큰 문자를 찾아서 출력하는 프로그램을 작성하시오
#include <stdio.h>
int main(void)
{
	char arr[50]; // 배열의 크기를 넉넉하게 50으로 지정해준다.
	char len = 0; // 입력한 배열의 길이를 측정해주는 변수이다.
	int temp = 0; // 아스키코드의 크기를 비교해주는 변수이다
	int i;
	printf("영단어를 입력해주세요 : ");
	scanf_s("%s", arr, sizeof(arr));

	// 입력한 배열의 길이를 측정하는 반복문이다.
	while (arr[len] != '\0')
	{
		len++;
	}

	// 아스키코드 값이 큰값과 작은값을 비교해주는 반복문이다.
	for (i = 0; i < len; i++)
	{
		if (temp < arr[i])
			temp = arr[i];
	}
	printf("%c", temp);




}