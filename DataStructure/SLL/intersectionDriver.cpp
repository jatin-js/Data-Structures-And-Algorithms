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
	int Arr[]={1,3,2,4,5,6};
	for(i=0;i<6;i++)
		enQueue(&q, Arr[i]);
	intersectionNode(&q);
	return 0;
}
