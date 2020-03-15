#include<iostream>
#include"SLL.h"
using namespace std;
#include"SLL.cpp"
int main(){
	int i, data,key1,key2;
	struct Node *head=NULL;
	struct Node *pred=NULL;	
	struct Node *middle=NULL;
int Arr[]={1,2,3,4,5,6,7,8};
	for(i=0;i<8;i++){
		insertNode(&head, Arr[i], pred);
		pred=(!pred)? head:pred->next;
	}
	traverse(head);
	cout<<endl;
	pairwiseSwap(&head);
	traverse(head);
	return 1;
}
