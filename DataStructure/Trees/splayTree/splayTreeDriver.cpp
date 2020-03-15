#include<iostream>
#include"splayTree.h"
using namespace std;
#include"splayTree.cpp"
int main()
{

	struct Node *root=NULL;
	struct Node* newNode1=new struct Node(1);
	insertNode(&root, newNode1);
	struct Node* newNode2=new struct Node(2);
	insertNode(&root, newNode2);
	struct Node* newNode3=new struct Node(3);
	insertNode(&root, newNode3);
	struct Node* newNode4=new struct Node(4);
	insertNode(&root, newNode4);
	struct Node* newNode5=new struct Node(5);
	insertNode(&root, newNode5);
	struct Node* newNode6=new struct Node(6);
	insertNode(&root, newNode6);
	struct Node* newNode7=new struct Node(7);
	insertNode(&root, newNode7);
	struct Node* newNode8=new struct Node(8);
	insertNode(&root, newNode8);
	struct Node* newNode9=new struct Node(9);
	insertNode(&root, newNode9);
	struct Node* newNode10=new struct Node(10);
	insertNode(&root, newNode10);
	preorder(root);
	cout<<endl;
	struct Node* add=NULL;		
	search(&root, 2, &add);
	preorder(root);
	return 0;
} 
