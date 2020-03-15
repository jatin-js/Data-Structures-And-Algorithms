#include<iostream>
#include"maxHeap.h"
using namespace std;
#include"maxHeap.cpp"
int main()
{
	struct mHeap * h=new struct mHeap(11);
	createHeap(h);
	traverse(h);
	increaseKey(h,10,65);
	traverse(h);
	return 0;
}
