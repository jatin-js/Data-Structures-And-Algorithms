#include<iostream>
#include"SLL.h"
using namespace std;
#include"SLL.cpp"
int main(){
	int i, data;
	struct Node *head=NULL;
	struct Node *pred=NULL;	
	struct Node *middle=NULL;
int Arr[]={1,2,2,3,3,3,4,5,5};
	for(i=0;i<9;i++){
		insertNode(&head, Arr[i], pred);
		pred=(!pred)? head:pred->next;
	}
	removeDuplicatesSortedList(&head);	
	traverse(head);
	return 0;
}

	
