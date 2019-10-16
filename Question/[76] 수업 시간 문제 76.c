// 76. 3명의 학생 정보를 구조체 방식을 사용하여 값을 입력받은 후 출력하는 프로그램입니다.
#include <stdio.h>

// student 라는 이름을 가진 구조체 생성
struct student {

	char name[10]; // 이름
	int Korean; // 국어
	int Math; // 수학
	int English; // 영어

};

int highest(struct student person[]) {
	
	int max = person[0].Korean;
	int index;

	for (int i = 0; i < 3; i++) {

		if (person[i].Korean > max) {

			max = person[i].Korean;
			
			index = i;
		}
	}

	printf("국어 점수가 가장 높은 학생이름 및 점수 : %s %d", person[index].name, max);

		
}

int main(void) {
	
	// 앞에서 생성한 구조체를 참조해서 person 이라는 배열을 생성하였습니다.
	struct student person[3];

	for (int i = 0; i < 3; i++) {
		
		// person 구조체 배열을 사용하고 . 을 사용하여 위에서 생성한 각각의 값에 해당하는 변수의 값을 불러오고있습니다.
		
		printf("이름을 입력해주세요 : ");
		scanf_s("%s", person[i].name,sizeof(person[i].name)); // %s 를 사용할 시 sizeof 문을 사용해주어야합니다.

		printf("점수(국어, 수학, 영어) : ");
		scanf_s("%d %d %d", &person[i].Korean, &person[i].Math, &person[i].English);
		
		printf("\n");
	}

	// highest 함수를 호출하고있으며 person 구조체 배열을 파라미터로 전달하고있습니다.
	highest(person);

}

