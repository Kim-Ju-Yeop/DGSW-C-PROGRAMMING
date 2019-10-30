#include <stdio.h>
#include <ctype.h>

int top = -1;
int calcu_top = -1;
char stack[100];
double calcu_stack[100];


// Stack ���� �Է� �Լ�
void push(char text) {
	stack[++top] = text;
}

// Stack ���� ��� �Լ�
char pop() {
	return stack[top--];
}


// calcu_stack ���� �Է� �Լ�
void calcu_push(double num) {
	calcu_stack[++calcu_top] = num;
}

// calcu_stack ���� ��ȯ �Լ�
double calcu_pop() {
	return calcu_stack[calcu_top--];
}

// ��� �Լ�
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

// Asci ���� ���� ��ȯ �Լ�
int asci(char ch) {
	return ch - '0';
}

// ���� �켱���� Ȯ�� �Լ�
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

// ����, ���� ���� �Լ�
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

		// ������ ���
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

	printf("������ �Է����ּ��� (���� ǥ���) : ");
	scanf("%s", infix);

	verification(infix, postfix);

	printf("���� ǥ��� : ");
	printf("%s", postfix);

	printf("\n��� ��� : %.3lf", calculation(postfix));
}
