#include<iostream>
#include"stack.h"
using namespace std;
#include"stack.cpp"
int main()
{
	struct Node *top=NULL;
	int Arr[]={1,3,2,4,5},i,data;
	for(i=0;i<5;i++)
		push(&top, Arr[i]);
	traverse(top);
	return 0;
}		
		
