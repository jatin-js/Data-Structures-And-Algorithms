#include<iostream>
#include"SLL.h"
using namespace std;
#include"SLL.cpp"
int main(){
	int i, data;
	struct Node *head=NULL;
	struct Node *pred=NULL;	
	struct Node *middle=NULL;
int Arr[]={1,2,1,3,1,2,2};
	for(i=0;i<7;i++){
		insertNode(&head, Arr[i], pred);
		pred=(!pred)? head:pred->next;
	}
	removeDuplicatesSortedList(&head);	
	traverse(head);
	return 0;
}

	
