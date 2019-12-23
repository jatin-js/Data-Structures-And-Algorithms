#include<iostream>
#include"tree.h"
using namespace std;
#include"tree.cpp"
int main()
{
	int arr[]={1,5,10,40,30,15,18,20};
	struct Node* root=specialTree(arr, 0, 7);
	inorder(root);
	return 1;
}
