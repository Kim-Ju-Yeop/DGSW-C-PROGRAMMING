// 81. 사용자가 입력한 데이터가 0이 아닐 경우 계속 데이터를 순차적으로 연결 리스트 형식으로 앞에서 데이터를 입력받고 데이터를 모두 삭제하는 코드를 작성하시오
#include <stdio.h>
#include <stdlib.h>

typedef struct node {

	int data;
	struct node * next;
} Node;

// 삽입 함수
// main 함수에 존재하는 head 를 CallByReference 형식으로 *head 로 매개변수로 입력받습니다.
void insert(Node * *head, int input) {

	Node * newNode;                                                               
	
	newNode = (Node *)malloc(sizeof(Node));
	newNode->data = input;
	newNode->next = NULL;

	// 만약 *head 의 값이 NULL 일 시 
	if (*head == NULL) {

		*head = newNode;
	}

	// *head 의 값이 NULL 이 아닌 경우
	else {

		// newNode 의 next 값을 *head 가 가리키고 있는 값으로 설정합니다.
		newNode->next = *head;

		// *head 는 새로운 newNode 주소값을 저장합니다.
		*head = newNode;
	}
	
}

// 삭제 함수
void delete(Node * *head) {

	if (*head == NULL) {

		return 0;
	}
	else {
		
		// delNode 포인터 변수에 *head 값을 대입하고 있습니다.
		// 즉 *head 변수는 현재 가장 최근에 삽입한 newNode 값을 저장하고있습니다.
		Node * delNode = *head;

	    // delNextNode 포인터 변수에는 delNode 포인터 변수가 가리키고 있는 newNode 의 next 값을 가리킵니다.
		// 즉 delNode 의 앞에 위치한 newNode 를 가리킵니다.
		Node * delNextNode = delNode->next; 

		*head = delNextNode; // *head 포인터 변수에 delNextNode 가 가리키고 있는 newNode 의 주소값을 가리키게 합니다.

		printf("%d (을)를 삭제합니다.\n", delNode->data);
		free(delNode); // delNode 포인터 변수가 가리키는 값을 삭제시킵니다.

		// delNextNode 의 값이 NULL 이 아닐 경우 조건을 계속 반복합니다.
		while (delNextNode != NULL) {

			delNode = delNextNode; 
			delNextNode = delNode->next;

			// *head 가 가리키는 값을 delNextNode 의 값으로 설정합니다.
			*head = delNextNode;

			printf("%d (을)를 삭제합니다. \n", delNode->data);
			free(delNode);
		}
	}
}

int main(void) {

	Node * head = NULL;
	Node * newNode = NULL;
	int input;

	while (1) {

		printf("데이터를 입력해주세요 : ");
		scanf("%d", &input);

		if (input == 0) {
			break;
		}
		else {
			
			insert(&head, input);
		}
	}

	delete(&head); // 삭제 함수를 호출합니다.

	return 0;
}



