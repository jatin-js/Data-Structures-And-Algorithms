#include<iostream>
#include"queue.h"
using namespace std;
#include"queue.cpp"
int main()
{
	int i,data;
	struct Queue q;
	init(&q);
	int Arr[]={1,2,3,4,5,6,7,8};
	for(i=0;i<8;i++)
		enQueue(&q, Arr[i]);
	traverse(&q);
	if(deQueue(&q, &data))
		cout<<data<<endl;
traverse(&q);
	return 0;
}
	
