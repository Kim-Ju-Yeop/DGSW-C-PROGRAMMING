// 문제 1. Tree 형식으로 5개의 점들을 연결 시키고 가장 안쪽에 존재하는 왼쪽에 값을 출력 시켜라.
#include <stdio.h>
#include <stdlib.h>

typedef struct tree {
	char data;
	struct tree *leftChild;
	struct tree *rightChild;
} Tree;

void print(Tree* root) {
	
	if (root->leftChild == NULL) {
		printf("%c", root->data);
	}
	else {

		while (1) {

			if (root->leftChild == NULL) {
				break;
			}
			root = root->leftChild;
		}
		printf("%c", root->data);
	} 
}

int main(void) {
	
	Tree * a = (Tree*)malloc(sizeof(Tree));
	Tree * b = (Tree*)malloc(sizeof(Tree));
	Tree * c = (Tree*)malloc(sizeof(Tree));
	Tree * d = (Tree*)malloc(sizeof(Tree));
	Tree * e = (Tree*)malloc(sizeof(Tree));

	a->data = 'A';
	b->data = 'B';
	c->data = 'C';
	d->data = 'D';
	e->data = 'E';

	a->leftChild = b;
	b->leftChild = d;
	b->rightChild = e;
	a->rightChild = c;

	d->leftChild = NULL;
	d->rightChild = NULL;

	e->leftChild = NULL;
	e->rightChild = NULL;

	c->leftChild = NULL;
	c->rightChild = NULL;

	print(a);
}