// 83. 사용자로부터 데이터를 자유롭게 입력받은 후 데이터의 크기에 맞게 정렬을 합니다. 그 후 사용자로 부터 삭제할 데이터를 입력 후 데이터에서 그 수를 삭제시키게 하는 코드를 작성하시오.
#include <stdio.h>
#include <stdlib.h>

typedef struct node {

	int data;
	struct node * next;
} node;

void delete(node ** head, int input) {

	node * deleteNode = (node *)malloc(sizeof(node));
	deleteNode = *head;

	node * temp = (node *)malloc(sizeof(node));
	temp = NULL;

	// 사용자가 입력한 데이터가 head 첫번 째에 위치할 경우
	if (deleteNode->data == input) {
		
		*head = deleteNode->next;
		
		free(deleteNode);

		return;
	}

	while (deleteNode->next != NULL && deleteNode->next->data != input) {

		deleteNode = deleteNode->next;
	}

	if (deleteNode->next == NULL) {
		
		return;
	}

	temp = deleteNode->next;
	deleteNode->next = temp->next;

	free(temp);

}


void insert(node ** head, int input) {

	node * before = (node *)malloc(sizeof(node));
	before = *head;

	node * newnode = (node *)malloc(sizeof(node));
	newnode->data = input;
	newnode->next = NULL;

	// 데이터 입력이 처음일 경우
	if (*head == NULL) {
		
		*head = newnode;

		return;
	} 

	// 사용자가 입력한 데이터가 제일 작은 경우
	else if (input < (*head)->data) {

		newnode->next = *head;

		*head = newnode;

		return;
	} 

	// 사용자가 입력한 데이터가 가장 큰 경우
	while (before->next != NULL && before->next->data < input) {
		
		before = before->next;
	}

	// 중간 삽입
	newnode->next = before->next;
	before->next = newnode;

}

int main(void) {

	int input;

	node * head = NULL;

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

	printf("삭제할 데이터를 입력해주세요 : ");
	scanf("%d", &input);

	delete(&head, input);

	return 0;

}