#include<iostream>
#include"SLL.h"
using namespace std;
#include"SLL.cpp"
int main(){
	int i, data;
	struct Node *head1=NULL,*head2=NULL;
	struct Node *pred=NULL;	
	int Arr[]={1,2,4,6,3,7,8};
	int A[]={2,3,11};
	for(i=0;i<7;i++){
		insertNode(&head1, Arr[i], pred);
		pred=(!pred)? head1:pred->next;
	}
	traverse(head1);
	cout<<endl;
	pred=NULL;
	for(i=0;i<3;i++){
		insertNode(&head2, A[i], pred);
		pred=(!pred)? head2:pred->next;
	}
	traverse(head2);
	cout<<endl;
	//head2->next->next->next=head1->next->next->next->next;
	intersectionNode(head1, head2);
	
	return 0;
}	
