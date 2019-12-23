#include<iostream>
#include"SLL.h"
using namespace std;
#include"SLL.cpp"
int main(){
	int i, data;
	struct Node *head=NULL;
	struct Node *pred=NULL;	
	struct Node *middle=NULL;
int Arr[]={1,2,3,2,4,3,1,2,3,4,5,4,3,1,2,3,4,5,3,2,3,4,3};
	for(i=0;i<23;i++){
		insertNode(&head, Arr[i], pred);
		pred=(!pred)? head:pred->next;
	}
	traverse(head);
	cout<<endl;
	removeDuplicatesUnsortedList(&head);
	traverse(head);
	return 1;
}
