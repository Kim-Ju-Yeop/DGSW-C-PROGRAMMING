// 구조체 
// 예제1
#include <stdio.h>
#include <string.h>

struct person
{
	char name[20];
	char phoneNum[20];
	int age;
};

int main()
{
	struct person man1, man2;

	// man1에 대한 정보를 저장한다.
	strcpy(man1.name, "이규락");
	strcpy(man1.phoneNum, "010-9450-2446");
	man1.age = 17;

	// man2에 대한 정보를 입력한다.
	printf("이름 입력 : ");
	scanf("%s", man2.name);
	
	printf("번호 입력 : ");
	scanf("%s", man2.phoneNum);

	printf("나이 입력 : ");
	scanf("%d", &(man2.age));

	printf("\n");

	// man1에 대한 정보를 출력한다.
	printf("이름 : %s\n", man1.name);
	printf("번호 : %s\n", man1.phoneNum);
	printf("나이 : %d\n", man1.age);

	printf("\n");

	// man1에 대한 정보를 출력한다.
	printf("이름 : %s\n", man2.name);
	printf("번호 : %s\n", man2.phoneNum);
	printf("나이 : %d\n", man2.age);

}[
