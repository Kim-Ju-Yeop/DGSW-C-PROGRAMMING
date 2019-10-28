// Tree 
// 트리형 
#include<stdio.h>
#include<stdlib.h>

typedef struct tree {
	int data;
	struct tree* leftChild;
	struct tree* rightChild;
}Tree;

Tree* makeTree(void) {
	Tree * bt = (Tree *)malloc(sizeof(Tree));
	bt->rightChild = NULL;
	bt->leftChild = NULL;
	return bt;
}
void setData(Tree* bt, int input) {
	bt->data = input;
}
void makeLeftChild(Tree * bt, Tree* subtree) {
	bt->leftChild = subtree;
}
void makeRightChild(Tree* bt, Tree* subtree) {
	bt->rightChild = subtree;
}

// 전위 순회
void PreorderTraverse(Tree* root) {
	
	if (root == NULL) {
		return;
	}

	printf("%d ", root->data);
	PreorderTraverse(root->leftChild);
	PreorderTraverse(root->rightChild);
}

// 중위 순회
void InorderTraverse(Tree* root) {

	if (root == NULL) {
		return;
	}

	InorderTraverse(root->leftChild);
	printf("%d ", root->data);

	InorderTraverse(root->rightChild);
}

// 후위 순회
void PostorderTraverse(Tree* root) {

	if (root == NULL) {
		return;
	}

	PostorderTraverse(root->leftChild);
	PostorderTraverse(root->rightChild);
	printf("%d ", root->data);
}


int main() {
	Tree* bt1 = makeTree();
	Tree* bt2 = makeTree();
	Tree* bt3 = makeTree();
	Tree* bt4 = makeTree();
	Tree* bt5 = makeTree();
	Tree* bt6 = makeTree();
	Tree* bt7 = makeTree();

	setData(bt1, 1);
	setData(bt2, 2);
	setData(bt3, 3);
	setData(bt4, 4);
	setData(bt5, 5);
	setData(bt6, 6);
	setData(bt7, 7);

	makeLeftChild(bt1, bt2);
	makeRightChild(bt1, bt3);
	makeLeftChild(bt2, bt4);
	makeRightChild(bt2, bt5);
	makeLeftChild(bt3, bt6);
	makeRightChild(bt3, bt7);

	PostorderTraverse(bt1);

	return 0;
}
