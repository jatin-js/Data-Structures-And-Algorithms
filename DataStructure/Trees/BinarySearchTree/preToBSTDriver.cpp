#include<iostream>
#include"binarySearchTree.h"
#include"stack.h"
using namespace std;
#include"stack.cpp"
#include"binarySearchTree.cpp"
int main()
{
	int pre[]={30,20,10,25,40,35,50};
	struct Node* root=preToBST(pre, 7);
	preorder(root);
	return 0;
}
	
