#include<iostream>
#include"splayTree2.h"
using namespace std;
#include"splayTree2.cpp"
int main()
{

	struct Node *root=NULL;
	struct Node* newNode1=new struct Node(7);
	insertNode(&root, newNode1);
	struct Node* newNode2=new struct Node(6);
	insertNode(&root, newNode2);
	struct Node* newNode3=new struct Node(5);
	insertNode(&root, newNode3);
	struct Node* newNode4=new struct Node(4);
	insertNode(&root, newNode4);
	struct Node* newNode5=new struct Node(3);
	insertNode(&root, newNode5);
	struct Node* newNode6=new struct Node(2);
	insertNode(&root, newNode6);
	struct Node* newNode7=new struct Node(1);
	insertNode(&root, newNode7);
	preorder(root);
	cout<<endl;
	struct Node* add=NULL;		
	if(search(&root, 1, &add)){
		if(1>root->data){
			leftRotation(&root);	
		}
		else if(1<root->data){ 
			rightRotation(&root);
		}	
		cout<<add->data<<endl;			
	}
	preorder(root);
	return 0;
}
