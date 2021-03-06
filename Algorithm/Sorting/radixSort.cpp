#include<iostream>
#include<math.h>
#include<limits.h>
using namespace std;

struct Node{
	int data;
	struct Node* next;
};

int radixSort(int *arr, int );

int main()
{
	int arr[]={322,12,1,345,3432,23,21,34};
	int n=8;
	radixSort(arr, n);
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
	newNode->next=NULL;
	if(!*head) *head=newNode;
	else{
		struct Node* temp=*head;
		while(temp->next)temp=temp->next;
		temp->next=newNode;
	}
	return 1;
}

int deleteNode(struct Node** head,int *key){
	*key=(*head)->data;
	struct Node*temp=*head;
	*head=(*head)->next;
	delete temp;
	return 1;
}



int radixSort(int arr[], int n){
	int i,j,k,key;
	struct Node**bins;
	bins=new struct Node*[10];
	for(i=0;i<n;i++)bins[i]=NULL;
	int max=findMax(arr, n);
	int maxDigit=0;
	while(max>0){
	max/=10;
	maxDigit++;
	}
	for(i=0;i<maxDigit;i++){
		for(j=0;j<n;j++){
			insert(&bins[int(arr[j]/pow(10,i))%10], arr[j]);   //  math functions return double type values		
		}
		k=0;
		for(j=0;j<10;j++){
			if(bins[j]){
				deleteNode(&bins[j], &key);
				arr[k++]=key;
				j--;
			}
		}
	}
	delete bins;
	return 1;
}


