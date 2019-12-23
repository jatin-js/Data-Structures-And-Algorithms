
#include<iostream>
#include"AVL.h"
using namespace std;
#include"AVL.cpp"
int main()
{

	struct Node *root=NULL;
	for(int i=5;i<=55;i+=10){
		struct Node* newNode=new struct Node(i);
		insertNode(&root, newNode);
	}
	for(int i=1;i<=4;i++){
		struct Node* newNode=new struct Node(i);
		insertNode(&root, newNode);
	}


	preorder(root);

	cout<<endl;



	preorder(root);

	return 0;



}

