// 84. Stack 기능을 사용하여 연결 리스트 방식으로 push 와 pop 을 자유롭게 사용할 수 있도록 코드를 작성하시오.
#include<stdio.h>
#include<stdlib.h>

// node 구조체
typedef struct node {

	int data; 
	struct node * link; // link 즉 next 를 의미한다.
}Node;

// Node top 을 전역변수로 설정한다.
Node *top = NULL;

// 출력 함수
int pop() {
	
	Node *temp; // 삭제할 값을 저장하는 용도
	
	// top 의 값이 NULL 일 시 stack underflow 를 띄운다.
	if (top == NULL) {
		
		printf("stack underflow");
		return 1;
	}
	else {

		temp = top; // temp 변수에 삭제할 값을 저장한다.
		top = top->link; // top 변수에 삭제할 값 앞에 값을 저장한다.

		free(temp); // 삭제
	}
}

// 입력 함수
void push(int num) {

	Node *newnode;
	newnode = (Node*)malloc(sizeof(Node));

	newnode->data = num;
	newnode->link = NULL;

	// 입력 첫 번째 경우
	if (top == NULL) {

		top = newnode;
	}
	else {
		
		newnode->link = top; // newnode 의 앞에 값을 top 으로 설정한다.
		top = newnode; // top 을 새로 생긴 newnode 로 설정한다.

		top->link = newnode->link; // top 의 앞에 값을 newnode 의 앞에 값 즉 top link 값을 앞에 값으로 설정한다.
	}
}

// 메인 함수
int main(void) {
	
	push(5);
	push(4);
	push(3);

	pop();
	pop();
	pop();
	push(2);
	push(1);
	
}
