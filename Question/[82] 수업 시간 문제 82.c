// 82. ����ڷ� ���� ���� �����Ͱ� 0�� �ƴ� ������ ��� �����͸� �Է¹����鼭 ���������� �����͸� �ڿ��� ���� �Է¹ް� ������ ���� �Լ��� ȣ���ϸ� �ڿ��� ���� ������ 1���� �����ϴ� �ڵ带 �ۼ��Ͻÿ�.
#include <stdio.h>
#include <stdlib.h>

typedef struct node {

	int data;
	struct node * next;
} node;

//���� �Լ�
void insert(node * *head, node * *tail, int input) {

	node * newnode;

	newnode = (node *)malloc(sizeof(node));
	newnode->data = input;
	newnode->next = NULL;
	
	// ù ��° ������ ����
	if (*head == NULL) {

		*head = newnode;
		*tail = newnode;
	}
	else {

		(*tail)->next = newnode;
		*tail = newnode;
	}
	
}

// ���� �Լ�
void delete(node ** head, node ** tail) {
	
	node * delNode = (node *)malloc(sizeof(node));
	node * delPreNode = (node *)malloc(sizeof(node));

	delNode = *tail; // delNode ������ *tail
	delPreNode = *head; // delPreNode ������ *head
	
	// delPreNode ������ *tail �� delNode �� ����Ű�� �� ������ �ݺ����� �����ϴ�.
	while (delPreNode->next != *tail) {

		// delPreNode ������ delPreNode �� next ������ �����մϴ�.
		delPreNode = delPreNode->next;
	}

	printf("%d ��(��) �����մϴ�.\n", delNode->data);

	// delNode ������ �����մϴ�.
	free(delNode);

	// *tail ���� delPreNode �� �����մϴ�.
	*tail = delPreNode;
}

int main(void) {

	node * head = NULL;
	node * newnode = NULL;
	node * tail = NULL;
	int input;

	while (1) {

		printf("�����͸� �Է����ּ��� : ");

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
