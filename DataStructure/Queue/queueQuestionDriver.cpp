//Check if a queue can be sorted into another queue using a stack
//Queue contain first n natural no.s

#include<iostream>
#include"queue.h"
#include"stack.h"
using namespace std;
#include"queue.cpp"
#include"stack.cpp"
int main()
{
	int i,data;
	struct Queue q;
	init(&q);
	int Arr[]={6,1,2,3,4,5};
	for(i=0;i<6;i++)
		enQueue(&q, Arr[i]);
	traverse(&q);
	cout<<endl;
	if(queueQuestion(&q))
		cout<<"yes"<<endl;
	else	cout<<"No"<<endl;
	return 0;
}
	
