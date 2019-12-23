#include<iostream>
#include<limits.h>
#include"quickSort.h"
using namespace std;
#include"quickSort.cpp"
int main(){
	int arr[]={1,4,2,3,5,6,7, INT_MAX};

	
	quickSort(arr, 0, 7);
	traverse(arr, 8);	
	return 0;
}
