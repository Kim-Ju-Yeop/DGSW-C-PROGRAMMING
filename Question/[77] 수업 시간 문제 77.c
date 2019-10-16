// 77. 동적할당 기능을 사용하여 사용자가 배열의 크기를 입력하고 그 배열에 값을 입력하고 출력한다.
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	// 포인터 변수 size 를 생성하고있습니다.
	int * size;

	int input; // 배열의 크기를 입력받는 변수입니다.

	printf("동적할당을 받을 배열의 크기 : ");

	scanf_s("%d", &input);

	// size 포인터 변수를 포인터 배열로 변경하고 있습니다. 크기는 input 에 입력한 값이 됩니다.
	size = (int *)malloc(sizeof(int) * input);

	

	for (int i = 0; i < input; i++) {

		scanf_s("%d", &size[i]);
	}

	printf("출력 : ");

	for (int i = 0; i < input; i++) {

		printf("%d ", size[i]);
	}

	// 값을 반환하고있습니다.
	free(size);
}
