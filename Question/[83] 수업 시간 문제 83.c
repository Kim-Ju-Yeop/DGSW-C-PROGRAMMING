// 83. ����ڷκ��� �����͸� �����Ӱ� �Է¹��� �� �������� ũ�⿡ �°� ������ �մϴ�. �� �� ����ڷ� ���� ������ �����͸� �Է� �� �����Ϳ��� �� ���� ������Ű�� �ϴ� �ڵ带 �ۼ��Ͻÿ�.
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

	// ����ڰ� �Է��� �����Ͱ� head ù�� °�� ��ġ�� ���
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

	// ������ �Է��� ó���� ���
	if (*head == NULL) {
		
		*head = newnode;

		return;
	} 

	// ����ڰ� �Է��� �����Ͱ� ���� ���� ���
	else if (input < (*head)->data) {

		newnode->next = *head;

		*head = newnode;

		return;
	} 

	// ����ڰ� �Է��� �����Ͱ� ���� ū ���
	while (before->next != NULL && before->next->data < input) {
		
		before = before->next;
	}

	// �߰� ����
	newnode->next = before->next;
	before->next = newnode;

}

int main(void) {

	int input;

	node * head = NULL;

	while (1) {
	
		printf("�����͸� �Է����ּ��� : ");
		scanf("%d", &input);

		if (input == 0) {
			
			break;
		}
		else {
			
			insert(&head, input);
		}
		
	}

	printf("������ �����͸� �Է����ּ��� : ");
	scanf("%d", &input);

	delete(&head, input);

	return 0;

}