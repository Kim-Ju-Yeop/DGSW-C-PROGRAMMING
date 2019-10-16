// 79. 순차 리스트 방식을 사용해서 사용자로 부터 데이터를 입력한 후 출력을 합니다. 또한 사용자로부터 삭제할 데이터의 숫자를 입력받아 숫자를 삭제합니다.
#include <stdio.h>

// 출력함수 
void print(int * arr) {

	for (int i = 0; i < 100; i++) {

		if (arr[i] != -1) {
			printf("%d ", arr[i]);
		}
		else {
			continue;
		}
	}

}

// 삭제 함수
void delete(int * arr) {

	int num;
	int start = 0; // 사용자가 입력한 데이터 숫자의 인덱스 값
	int end; // 배열의 마지막 끝 값


	printf("\n");
	printf("삭제할 데이터의 숫자를 입력해주세요 : ");
	scanf("%d", &num);

	// found() 함수를 호출하면서 만약 사용자가 입력한 num의 값이 배열에서 없을 떄 까지 반복문을 돌립니다.
	while (found(arr, num) != -2) {
		// start 변수에 사용자가 입력한 숫자의 배열에서의 인덱스 값을 저장합니다.
		// 만약 사용자가 입력한 데이터의 숫자가 중복이 된다면 제일 앞에 숫자의 인덱스를 저장합니다.
		start = found(arr, num);

		// end 변수에 arr 배열에서의 비어있는 값의 인덱스를 찾습니다.
		// 즉 비어있는 값의 가장 앞에 것을 찾습니다.
		end = found(arr, -1);

		for (int i = start; i < end; i++) {

			arr[i] = arr[i + 1];
		}
	}
	
}

// 조회 함수
// found() 함수에서는 데이터(인덱스) 조회를 하는 기능을 합니다.
int found(int *arr, int num) {


	// for문을 사용하면서 arr 배열에서 각각의 인덱스에 값이 비어있는 인덱스를 반환합니다.
	for (int i = 0; i < 100; i++) {
		
		if (arr[i] == num) {
			
			return i; // arr 배열의 비어있는 칸의 인덱스 값을 전달합니다.
		}
	}

	// 만약 num 의 값이 배열 속에 없다면 -2 를 return 해줍니다.
	return -2;
}

// 삽입 함수
// found() 함수로 부터 받은 데이터(인덱스) 의 값에 맞게 사용자에게 데이터의 개수를 입력받은 후 배열 각각의 인덱스에 값을 입력받고있습니다.
void insert(int *arr) {

	int num; 
	int start; // 인덱스 값을 입력받는 변수
	
	printf("\n");
	printf("삽입할 데이터의 개수를 입력해주세요 : ");
	scanf("%d", &num);

	// found 함수를 호출하고있습니다.
	// 매개변수로 arr 배열과 사용자가 입력한 데이터의 개수를 전달하고있습니다.
	start = found(arr, -1);

	printf("삽입할 데이터를 입력해주세요 : ");

	// check 변수에는 arr 배열의 비어있는 인덱스 번호를 가지고있습니다.
	for (int i = start; i < start+num; i++) {

		scanf("%d", &arr[i]);
	}
	
}


// 메인함수 
int main() {

	int arr[100];

	// arr[100] 배열 안에 있는 값들을 모두 -1로 초기화하고있습니다.
	for (int i = 0; i < 100; i++) {
		
		arr[i] = -1;
	}

	// insert() 함수를 호출하고있습니다. 
	// 매개변수로 main 함수에서 생성한 arr 배열을 전달하고있습니다.
	insert(arr);

	print(arr);

	insert(arr);

	print(arr);

	delete(arr);

	print(arr);

	delete(arr);

	print(arr);

	delete(arr);

	print(arr);
}