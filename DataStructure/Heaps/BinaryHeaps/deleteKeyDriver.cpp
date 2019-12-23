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
	deleteK(h, 4);
	cout<<"after deletion"<<endl;
	traverse(h);
	insertK(h, 50);
	cout<<"after insertion"<<endl;
	traverse(h);	
	return 0;
}
