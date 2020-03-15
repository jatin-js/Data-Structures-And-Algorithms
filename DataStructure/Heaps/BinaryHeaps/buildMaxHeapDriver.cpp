#include<iostream>
#include"maxHeap.h"
using namespace std;
#include"maxHeap.cpp"
int main()
{
	int capacity, size;
	cout<<"Enter capacity";
	cin>>capacity;	
	struct mHeap* m=new struct mHeap(capacity);
	cout<<"Enter no. of element you want to insert";
	cin>>m->size;
	for(int i=1;i<=m->size;i++){
		cin>>m->harr[i];	
	}
	cout<<"Without building heap"<<endl;
	traverse(m);
	buildHeap(m);
	cout<<"After building heap"<<endl;
	traverse(m);
	return 0;
}
