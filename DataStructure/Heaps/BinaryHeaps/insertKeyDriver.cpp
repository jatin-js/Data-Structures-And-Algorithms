#include<iostream>
#include<limits.h>
#include"maxHeap.h"
using namespace std;
#include"maxHeap.cpp"
int main()
{
	struct mHeap * h=new struct mHeap(11);
	createHeap(h);
	traverse(h);
	insertK(h, 5);
	cout<<"after insertion"<<endl;
	traverse(h);
	cout<<h->harr;	
	return 0;
}
