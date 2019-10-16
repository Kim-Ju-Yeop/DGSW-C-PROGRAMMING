// 82. 사용자로 부터 받은 데이터가 0이 아닌 경우까지 계속 데이터를 입력받으면서 순차적으로 데이터를 뒤에서 부터 입력받고 데이터 삭제 함수를 호출하면 뒤에서 부터 데이터 1개를 삭제하는 코드를 작성하시오.
#include <stdio.h>
#include <stdlib.h>

typedef struct node {

	int data;
	struct node * next;
} node;

//삽입 함수
void insert(node * *head, node * *tail, int input) {

	node * newnode;

	newnode = (node *)malloc(sizeof(node));
	newnode->data = input;
	newnode->next = NULL;
	
	// 첫 번째 데이터 삽입
	if (*head == NULL) {

		*head = newnode;
		*tail = newnode;
	}
	else {

		(*tail)->next = newnode;
		*tail = newnode;
	}
	
}

// 삭제 함수
void delete(node ** head, node ** tail) {
	
	node * delNode = (node *)malloc(sizeof(node));
	node * delPreNode = (node *)malloc(sizeof(node));

	delNode = *tail; // delNode 변수를 *tail
	delPreNode = *head; // delPreNode 변수를 *head
	
	// delPreNode 변수가 *tail 즉 delNode 를 가리키게 될 때가지 반복문을 돌립니다.
	while (delPreNode->next != *tail) {

		// delPreNode 변수에 delPreNode 의 next 값으로 대입합니다.
		delPreNode = delPreNode->next;
	}

	printf("%d 을(를) 삭제합니다.\n", delNode->data);

	// delNode 변수를 삭제합니다.
	free(delNode);

	// *tail 값을 delPreNode 로 설정합니다.
	*tail = delPreNode;
}

int main(void) {

	node * head = NULL;
	node * newnode = NULL;
	node * tail = NULL;
	int input;

	while (1) {

		printf("데이터를 입력해주세요 : ");

		scanf("%d", &input);

		if (input == 0) {
			break;
		}
		else {

			insert(&head, &tail, input);
		}
	}

	delete(&head, &tail);
	delete(&head, &tail);
	// delete(&head, &tail);
	
	return 0;
}
