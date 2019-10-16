// 81. ����ڰ� �Է��� �����Ͱ� 0�� �ƴ� ��� ��� �����͸� ���������� ���� ����Ʈ �������� �տ��� �����͸� �Է¹ް� �����͸� ��� �����ϴ� �ڵ带 �ۼ��Ͻÿ�
#include <stdio.h>
#include <stdlib.h>

typedef struct node {

	int data;
	struct node * next;
} Node;

// ���� �Լ�
// main �Լ��� �����ϴ� head �� CallByReference �������� *head �� �Ű������� �Է¹޽��ϴ�.
void insert(Node * *head, int input) {

	Node * newNode;                                                               
	
	newNode = (Node *)malloc(sizeof(Node));
	newNode->data = input;
	newNode->next = NULL;

	// ���� *head �� ���� NULL �� �� 
	if (*head == NULL) {

		*head = newNode;
	}

	// *head �� ���� NULL �� �ƴ� ���
	else {

		// newNode �� next ���� *head �� ����Ű�� �ִ� ������ �����մϴ�.
		newNode->next = *head;

		// *head �� ���ο� newNode �ּҰ��� �����մϴ�.
		*head = newNode;
	}
	
}

// ���� �Լ�
void delete(Node * *head) {

	if (*head == NULL) {

		return 0;
	}
	else {
		
		// delNode ������ ������ *head ���� �����ϰ� �ֽ��ϴ�.
		// �� *head ������ ���� ���� �ֱٿ� ������ newNode ���� �����ϰ��ֽ��ϴ�.
		Node * delNode = *head;

	    // delNextNode ������ �������� delNode ������ ������ ����Ű�� �ִ� newNode �� next ���� ����ŵ�ϴ�.
		// �� delNode �� �տ� ��ġ�� newNode �� ����ŵ�ϴ�.
		Node * delNextNode = delNode->next; 

		*head = delNextNode; // *head ������ ������ delNextNode �� ����Ű�� �ִ� newNode �� �ּҰ��� ����Ű�� �մϴ�.

		printf("%d (��)�� �����մϴ�.\n", delNode->data);
		free(delNode); // delNode ������ ������ ����Ű�� ���� ������ŵ�ϴ�.

		// delNextNode �� ���� NULL �� �ƴ� ��� ������ ��� �ݺ��մϴ�.
		while (delNextNode != NULL) {

			delNode = delNextNode; 
			delNextNode = delNode->next;

			// *head �� ����Ű�� ���� delNextNode �� ������ �����մϴ�.
			*head = delNextNode;

			printf("%d (��)�� �����մϴ�. \n", delNode->data);
			free(delNode);
		}
	}
}

int main(void) {

	Node * head = NULL;
	Node * newNode = NULL;
	int input;

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

	delete(&head); // ���� �Լ��� ȣ���մϴ�.

	return 0;
}



