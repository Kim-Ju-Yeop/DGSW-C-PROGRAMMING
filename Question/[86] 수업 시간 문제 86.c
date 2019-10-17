// 86. Queue 기능을 사용하여 연결 리스트 형식으로 삽입과 삭제 및 출력을 자유로운 형식으로 코드를 작성하시오
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	
	int data;
	struct node *link;
} Node;

Node * front = NULL;
Node * rear = NULL;

// 삽입 함수
void enqueue(int input) {

	Node * newnode;
	newnode = (Node*)malloc(sizeof(Node));

	newnode->data = input;
	newnode->link = NULL;

	// 첫 번째 입력 경우
	if (rear == NULL) {
		
		front = newnode;
		rear = newnode;
	}
	else {
		rear->link = newnode;
		rear = newnode;
	}
}

// 삭제 함수
void dequeue() {

	Node *temp;

	if (front == NULL) {

		rear = NULL;
		printf("Queue underlofw\n");
	}
	else {
		
		temp = front;

		if (front == rear) {
			front = NULL;
			rear = NULL;
		}
		else {
			front = front->link;
		}
		free(temp);
	}
}

// 출력 함수
void printq() {
	
	Node * p = front;

	while (p)
	{
		printf("%d", p->data);
		p = p->link;
	}
}

int main() {
	
	enqueue(1);
	enqueue(2);
	enqueue(3);
	enqueue(4);
	enqueue(5);

	dequeue();
	dequeue();
	dequeue();
	dequeue();
	dequeue();

	enqueue(1);
	enqueue(2);
	enqueue(3);
	enqueue(4);
	enqueue(5);

	printq();
}
