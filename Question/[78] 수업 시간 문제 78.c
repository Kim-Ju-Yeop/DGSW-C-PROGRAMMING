// 78. 동적할당 기능과 구조체를 사용하여 사용자로부터 번호, 키, 몸무게 를 입력후 BMI 지수를 포함한 값을 출력한다.
#include <stdio.h>

// student 구조체
struct student {

	int number; // 번호
	double height; // 키
	double weight; // 몸무게
	double BMI; // BMI 지수

};


// BMI 함수
// 매개변수로 구조체 student person[] 과 size 를 입력받습니다.
int BMI(struct student person[], int size) {

	// 입력받은 크기 만큼 반복문을 돌립니다.
	for (int i = 0; i < size; i++) {

		// 각각의 person[] 인덱스 BMI 에 BMI 지수를 구하고있습니다. 
		person[i].BMI = person[i].weight / (person[i].height * person[i].height);
	}

	
}

int main(void) {

	int size;

	printf("구조체 배열의 크기를 입력해주세요 : ");
	scanf_s("%d", &size);

	// 위에서 생성한 student 구조체를 사용하여 구조체 포인터 변수 person 을 생성하였습니다.
	struct student * person; 

	// 포인터 변수 person 을 포인터 배열로 입력한 size 값에 맞게 설정하고있습니다.
	// malloc 이라는 코드를 사용하는 방법
	// -> (자료형) malloc(sizeof(자료형) * 원하는 크기) 형식으로 진행을합니다. 
	// 따라서 현재 person 이라는 구조체 포인터 변수에 사용자가 입력한 크기 만큼의 배열이 생성되었습니다.
	person = (struct student *)malloc(sizeof(struct student) * size);

	// 사용자의 정보를 입력받는 for 문
	for (int i = 0; i < size; i++) {

		// 구조체 포인터인 person 변수의 & 주소값을 사용해서 각각의 인덱스에 번호, 키, 몸무게를 입력받고있습니다.
		scanf_s("%d", &person[i].number); // 번호
		scanf_s("%lf", &person[i].height); // 키
		scanf_s("%lf", &person[i].weight); // 몸무게


		// BMI 함수를 호출하면서 매개변수로 person 포인터 배열을 전달하고있으며 크기 또한 전달하고있다.
		BMI(person, size);
	}

	// 사용자의 정보를 출력하는 fot 문
	for (int i = 0; i < size; i++) {

		// 출력할 때는 주소값을 붙이지 않고 그대로 출력을 해도 됩니다.
		printf("%d번: ", person[i].number);
		printf("키:%g, ", person[i].height);
		printf("몸무게:%g, ", person[i].weight);
		printf("BMI지수:%0.2f", person[i].BMI);

		printf("\n");

		
	}
}
