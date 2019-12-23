#include<iostream>
#include"AVL2.h"
using namespace std;
#include"AVL2.cpp"
int main()
{

	struct Node *root=NULL;
	struct Node* newNode1=new struct Node(1);
	root=insertNode(root, newNode1);
	struct Node* newNode2=new struct Node(2);
	root=insertNode(root, newNode2);
	struct Node* newNode3=new struct Node(3);
	root=insertNode(root, newNode3);
	struct Node* newNode4=new struct Node(4);
	root=insertNode(root, newNode4);
struct Node* newNode5=new struct Node(5);
	root=root=insertNode(root, newNode5);

struct Node* newNode6=new struct Node(6);
	root=insertNode(root, newNode6);

struct Node* newNode7=new struct Node(7);
	root=insertNode(root, newNode7);

struct Node* newNode8=new struct Node(8);
	root=insertNode(root, newNode8);

struct Node* newNode9=new struct Node(9);
	root=insertNode(root, newNode9);

struct Node* newNode10=new struct Node(10);
	root=insertNode(root, newNode10);


	preorder(root);

	cout<<endl;

	root=deleteNode(root, 1);
	root=deleteNode(root, 2);
	root=deleteNode(root, 3);
	preorder(root);

	return 0;



}
