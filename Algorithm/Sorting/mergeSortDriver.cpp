#include<iostream>
#include<limits.h>
#include"mergeSort.h"
using namespace std;
#include"mergeSort.cpp"
int main(){
	int arr[14]={1,4,2,3,5,6,7,6,4,5,67,8,5,3};

	
	mergeSort(arr, 0, 13);
	traverse(arr, 14);	
	return 0;
}
