// 85 Queue 기능을 사용하여 배열 방법을 통해 입력과 삭제를 자유로운 형식으로 코드를 작성하시오
#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = 0;
int rear = 0;

// 입력 함수
void enqueue(int input) {

	if ((rear + 1) % MAX == front) {

		printf("Queue overflow\n");
		return;
	}

	rear = ++rear % MAX;
	queue[rear] = input;
}

// 삭제 함수
int dequeue() {

	if (front == rear) {

		printf("Queue underflow\n");
		return -1;
	}

	front = ++front % MAX;
	return queue[front];
}

// 출력 함수
void print_queue(void) {

	for (int i = front; i != rear; i = (++i) % MAX) {
		
		printf("%d ", queue[(i + 1) % MAX]);
	}
}

int main() {

	enqueue(1);
	enqueue(2);
	enqueue(3);
	enqueue(4);
	enqueue(5);

	printf("dequeue : %d\n", dequeue());
	printf("dequeue : %d\n", dequeue());
	
	enqueue(6);

	print_queue();
}

