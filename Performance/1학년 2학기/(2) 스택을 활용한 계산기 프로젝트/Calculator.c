#include <stdio.h>
#include <ctype.h>

int top = -1;
int calcu_top = -1;
char stack[100];
double calcu_stack[100];


// Stack 문자 입력 함수
void push(char text) {
	stack[++top] = text;
}

// Stack 문자 출력 함수
char pop() {
	return stack[top--];
}


// calcu_stack 숫자 입력 함수
void calcu_push(double num) {
	calcu_stack[++calcu_top] = num;
}

// calcu_stack 숫자 반환 함수
double calcu_pop() {
	return calcu_stack[calcu_top--];
}

// 계산 함수
double result(double ch1, double ch2, char text) {

	if (text == '+') {
		return ch1 + ch2;
	}
	else if (text == '-') {
		return ch1 - ch2;
	}
	else if (text == '/') {
		return ch1 / ch2;
	}
	else if (text == '*') {
		return ch1 * ch2;
	}
}

// Asci 문자 숫자 변환 함수
int asci(char ch) {
	return ch - '0';
}

// 문자 우선순위 확인 함수
int priority(char text) {

	switch (text) {

	case '*':
	case '/':
		return 5;

	case '+':
	case '-':
		return 3;

	default:
		return -1;
	}
}

// 숫자, 문자 검증 함수
void verification(char* infix, char* postfix) {

	int i = 0;
	int post_top = 0;

	for (i; infix[i] != NULL; i++) {

		// Number
		if (isdigit(infix[i])) {
			postfix[post_top++] = infix[i];
			continue;
		}
		// '('
		if (infix[i] == '(') {
			push(infix[i]);
			continue;
		}
		// ')'
		if (infix[i] == ')') {

			while (1) {

				char pop_data = pop();

				if (pop_data == '(') {
					break;
				}
				else {
					postfix[post_top++] = pop_data;
				}
			}
			continue;
		}

		// first or big
		if (top == -1 || priority(stack[top] < priority(infix[i]))) {
			push(infix[i]);
			continue;
		}
		while (1) {
			if (stack[top] != NULL && priority(stack[top]) >= priority(infix[i])) {
				char post_data = pop();
				postfix[post_top++] = post_data;
			}
			else {
				break;
			}
		}
		push(infix[i]);
	}
	while (top != -1) {
		postfix[post_top++] = pop();
	}
	postfix[post_top] = NULL;
}

double calculation(char * postifx) {

	int i = 0;
	for (i; postifx[i] != NULL; i++) {

		// 숫자일 경우
		if (isdigit(postifx[i])) {
			calcu_push(asci(postifx[i]));

			continue;
		}

		double ch1 = calcu_pop();
		double ch2 = calcu_pop();

		calcu_push(result(ch1, ch2, postifx[i]));
	}

	return calcu_pop();
}

int main() {

	char infix[100]; 
	char postfix[100];

	printf("계산식을 입력해주세요 (중위 표기법) : ");
	scanf("%s", infix);

	verification(infix, postfix);

	printf("후위 표기법 : ");
	printf("%s", postfix);

	printf("\n계산 결과 : %.3lf", calculation(postfix));
}
