#include<iostream>
#include"SLL.h"
using namespace std;
#include"SLL.cpp"
int main(){
	int i, data,key1,key2;
	struct Node *head=NULL;
	struct Node *pred=NULL;	
	struct Node *middle=NULL;
int Arr[]={1,2,3,4,5};
	for(i=0;i<5;i++){
		insertNode(&head, Arr[i], pred);
		pred=(!pred)? head:pred->next;
	}
	traverse(head);
	cout<<"Enter two keys"<<endl;
	cin>>key1>>key2;
	if(swapNodes(&head, key1, key2))
		traverse(head);
	else
		cout<<"Not possible!"<<endl;	
	return 0;
}
