#include<iostream>
#include"tree.h"
#include"queue.h"
using namespace std;
#include"tree.cpp"
#include"queue.cpp"
int main()
{
	struct Node *root=NULL;
	createTree(&root);
	cout<<"Breadth first traverse "<<endl;
	BFT(root);
	cout<<endl<<" DFT inorder "<<endl;
	inorder(root);
	cout<<endl<<"DFT preorder "<<endl;
	preorder(root);
	cout<<endl<<"DFT postorder "<<endl;
	postorder(root);
	
	return 0;
}
	
