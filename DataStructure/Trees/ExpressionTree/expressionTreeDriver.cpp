#include<iostream>
#include"expressionTree.h"
#include"queue.h"
using namespace std;
#include"expressionTree.cpp"
#include"queue.cpp"
int main()
{
	struct Node *root=NULL;
	createTree(&root);
	inorder(root);
	return 0;
}
