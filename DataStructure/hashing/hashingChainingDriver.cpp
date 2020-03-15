#include<iostream>
#include"hashingChaining.h"
using namespace std;
#include"hashingChaining.cpp"
int main(){
	//arr element = null
	struct Node* hashT[10];
	int i, data;	
	for(i=0;i<10;i++)hashT[i]=NULL;
	insert(hashT, 1);
	insert(hashT, 5);
	insert(hashT, 45);
	insert(hashT, 55);
	insert(hashT, 870);	
	insert(hashT, 100);

	struct Node* pre=NULL;


	if(search(hashT, 45, &pre)){

		deleteNode(hashT,45, pre); 

	}
	cout<<pre->next->data;
	
	return 0;
}
