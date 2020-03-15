#include<iostream>
#include"queue.h"
#include"stack.h"
using namespace std;
#include"queue.cpp"
#include"stack.cpp"
int main()
{
	int i,data,k;
	struct Queue q;
	init(&q);
	int Arr[]={1,2,3,4,5,6,7,8};
	for(i=0;i<8;i++)
		enQueue(&q, Arr[i]);
	traverse(&q);
	cout<<endl<<"Enter k value";
	cin>>k;
	firstKReverse(&q, k);
	cout<<endl;
	traverse(&q);
	return 0;
}
