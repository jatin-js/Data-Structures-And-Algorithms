#include<iostream>
#include"tree.h"
#include"stack.h"
using namespace std;
#include"tree.cpp"
#include"stack.cpp"
int main()
{
	struct Node *root=NULL;
	createTree(&root);
	iterativeInorder(root);
	return 1;
}
