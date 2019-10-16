// 80. 구조체를 사용해서 데이터를 5까지 반복문을 사용하여 입력받은 후 데이터에 있는 값들을 순차적으로 삭제하는 코드를 작성하시오
#include <stdio.h>
#include <stdlib.h>

typedef struct node {

	int data;
	struct node * next;
} Node;

int main(void) {

	Node * head = NULL;
	Node * newNode = NULL;

	// 반복문을 사용해서 5까지 데이터를 저장하고있습니다.
	for (int i = 1; i < 6; i++) {
		
		if (i == 1) {

			newNode = (Node *)malloc(sizeof(Node));
			newNode->data = i;
			newNode->next = NULL;
		}
		else {

			newNode = (Node *)malloc(sizeof(Node));
			newNode->data = i;
			newNode->next = head;
		}

		head = newNode;
	}

	if (head == NULL) {

		return 0;
	}
	else {
		
		// delNode 라는 포인터 변수에 head 변수가 가리키고 있는 값을 저장합니다.
		// 즉 맨 마지막에 저장된 데이터 5 newNode 값을 저장합니다.
		Node * delNode = head;

		// delNextNode 라는 포인터 변수에는 delNode 변수의 newNode 값의 next 가 가리키고 있는 값을 저장합니다.
		// 즉 5 newNode 값의 앞의 값 4 newNode 값을 저장시킵니다.
		Node * delNextNode = delNode->next;

		// head->data 라는 것은 head 가 가리키고 있는 newNode 의 data 를 출력합니다.
		printf("%d 을(를) 삭제합니다.\n", head->data);

		// free 함수를 사용해서 delNode (5) 를 삭제합니다.
		free(delNode); 

		// while 의 조건인 delNextNode 의 뜻은 delNextNode 즉 (4) newNode 가 NULL 이 아닐 때 까지 반복문을 반복합니다.
		while (delNextNode != NULL) {
			
			// delNode 변수의 값을 delNextNode 로 설정합니다. (4)
			delNode = delNextNode;

			// delNextNode 변수에 delNode 변수의 next가 가리키고 있는 값 (3) 을 저장합니다.
			delNextNode = delNode->next;
			
			// head 의 값을 delNode 로 설정하지 않는 까닭은 delNode 는 아래의 코드를 통해 삭제될 것이기 때문입니다.
			head = delNode;

			printf("%d 을(를) 삭제합니다.\n", head->data);
			free(delNode);
		}

		// 이렇게 delNextNode 의 값이 Null 일 때 까지 while 문을 반복한다면 저장된 데이터의 값이 모두 삭제될 것입니다.
	}


}
