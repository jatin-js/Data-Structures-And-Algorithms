#include<iostream>
#include"binarySearchTree.h"
#include"queue.h"
using namespace std;
#include"binarySearchTree.cpp"
#include"queue.cpp"
int main()
{
	int key=5;
	struct Node *root=NULL;
	struct Node *pred=NULL;
	createTree(&root);
	if(searchKey(root, key, &pred)){
		if(pred->left->data==key)
			cout<<pred->left->data;
		else
			cout<<pred->right->data;
	}
	else cout<<"Not found"<<endl;
	return 0;
}
