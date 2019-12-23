#include<iostream>
#include"heapSort.h"
using namespace std;
#include"heapSort.cpp"
int main()
{
	int arr[]={1,4,3,2,5,6};
	heapSort(arr, 6);
	for(int i=0;i<6;i++)cout<<arr[i]<<' ';
	return 0;

}
