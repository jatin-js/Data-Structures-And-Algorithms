#include<iostream>
#include"tree.h"
using namespace std;
#include"tree.cpp"
int main()
{
	int arr[]={1,2,3,4,5,6,7};
	struct Node* root=lotTree(arr, 0, 7);
	inorder(root);
	return 1;
}
