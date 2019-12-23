#include<iostream>
using namespace std;

int countingSort(int arr[], int );

int main()
{
	int arr[]={2,4,1,3,2,1,4};
	int n=7;
	countingSort(arr, n);
	for(int i=0;i<n;i++)
		cout<<arr[i]<<' ';
	return 0;
		
}

int countingSort(int arr[], int n){
	int count[10]={0}, i, j=0;
	for(i=0;i<n;i++){
		count[arr[i]]++;
	}
			
	for(i=0;i<n;i++){
		if(count[j]!=0){
			arr[i]=j; 
			count[j]--;}
		else{ 
			j++;
			i--;}	
	}	
		

	return 1;
}
