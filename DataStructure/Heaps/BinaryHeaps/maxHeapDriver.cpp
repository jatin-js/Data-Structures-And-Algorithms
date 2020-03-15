#include<iostream>
#include"maxHeap.h"
using namespace std;
#include"maxHeap.cpp"
int main()
{
	struct mHeap * h=new struct mHeap(11);
	createHeap(h);
	traverse(h);
	maxHeapify(h, 1);
	traverse(h);

	insertKey(h, 55);
	traverse(h);
	deleteKey(h, 1);
	traverse(h);
	return 0;
}
