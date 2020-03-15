#include<iostream>
using namespace std;
int convertIntoMaxHeap(int*, int);
int maxHeapify(int*, int, int);
void swap(int*, int, int);

int main()
{
	int n,*arr, i;
	cout<<"Enter size";
	cin>>n;
	arr=new int[n+1];
	for(i=1;i<=n;i++){
		cin>>arr[i];	
	}
	cout<<"Before"<<endl;
	for(i=1;i<=n;i++){
		cout<<arr[i]<<' ';	
	}
	convertIntoMaxHeap(arr, n);
	cout<<"After"<<endl;
	for(i=1;i<=n;i++){
		cout<<arr[i]<<' ';	
	}
	return 0;
}

int convertIntoMaxHeap(int *arr, int n){
	for(int i=n/2;i>=1;i--){
		maxHeapify(arr, n, i);
	}	
	return 1;
}

int maxHeapify(int *arr, int n, int i){
	int l=2*i;
	int r=2*i+1;
	int largest=i;	
	if(l<=n && arr[l]>arr[largest])
		largest=l;
	if(r<=n && arr[r]>arr[largest])
		largest=r;
	if(largest!=i){
		swap(arr, i, largest);		
		maxHeapify(arr, n, largest);
	}

	return 1;
}

void swap(int *arr, int i, int j){
	arr[i]=arr[i]^arr[j];	
	arr[j]=arr[i]^arr[j];	
	arr[i]=arr[i]^arr[j];	
}
