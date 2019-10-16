// 65. "SHIN HEE SONG" 이라는 문자열을 배열에 저장한 후 알파벳 하나를 입력받는다. 입력받은 알파벳이 배열에 있으면 해당 알파벳을 소문자로 바꾸어 문자열을 출력하고 입력받은 알파벳이 배열에 없으면 ERROR을 출력하는 프로그램을 작성하시오.
#include <stdio.h>
int main()
{
	char arr[] = { "S" "H" "I" "N" " " "H" "E" "E" " " "S" "O" "N" "G" };
	char input;
	int i;
	int j = 0;
	printf("알파벳을 입력해주세요 : ");
	scanf("%c", &input);
	
	for (i = 0; i < 13; i++)
	{
		if (input == arr[i])
		{
			arr[i] = input + 32;
			j++;
		}
		
	}
	if (j >= 1)
	{
		printf("%s", arr);
	}
	
	if (j < 1)
	{
		printf("ERROR");
	}


}
