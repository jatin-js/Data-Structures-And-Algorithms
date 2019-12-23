#include<iostream>
#include"SLL.h"
using namespace std;
#include"SLL.cpp"
int main(){
	int i, data;
	struct Node *head=NULL;
	struct Node *pred=NULL;	
int Arr[]={1,2,4,6,3,7,8};
	for(i=0;i<7;i++){
		insertNode(&head, Arr[i], pred);
		pred=(!pred)? head:pred->next;
	}

	pred->next=head->next->next;
	loopLength(head);
	return 0;
}
