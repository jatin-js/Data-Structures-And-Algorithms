#include<iostream>
#include<limits.h>
using namespace std;

struct Node{
	int data;
	struct Node* next;
};


int bucketSort(int arr[], int );

int main()                          
{
	int arr[]={2,4,1,3,2,1,4};
	int n=7;
	bucketSort(arr, n);
	for(int i=0;i<n;i++)
		cout<<arr[i]<<' ';
	return 0;
}

int findMax(int arr[], int n){
	int max=INT_MIN;
	for(int i=0;i<n;i++){
		if(arr[i]>max) max=arr[i];
	}
	return max;
	
}

int insert(struct Node** head, int data){
	struct Node* newNode=new struct Node;
	if(!newNode) return 0;
	newNode->data=data;
	newNode->next=*head;
	*head=newNode;

	return 1;
}

int deleteNode(struct Node** head, int *key){
	*key=(*head)->data;
	struct Node* temp=*head;
	*head=(*head)->next;
	delete temp;
	return 1;
}

int bucketSort(int arr[], int n){
	struct Node** bins;
	int max=findMax(arr, n);
	bins=new struct Node*[max+1]; 
		int i;
	for(i=0;i<max+1;i++)bins[i]=NULL;
	struct Node* ptr=NULL;
	for(i=0;i<n;i++){
		insert(&bins[arr[i]], arr[i]);
	}
	int j=0, key;
	for(i=0;i<max+1;i++){
		if(bins[i]) {
			deleteNode(&bins[i], &key);
			arr[j++]=key;
			i--;
		}
	}
	
	delete bins;
	
	
	return 1;
}


