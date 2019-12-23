#include<iostream>
#include<vector>
#include"disjointSet.h"
using namespace std;
#include"disjointSet.cpp"
int main(){
	int a[10];
	for(int i=0;i<10;i++) a[i]=-1;
	merge(a, 1,2);
	merge(a,3,4);
	merge(a,1,3);
	cout<<a[4]<<endl;
	cout<<findSetRec(a,2)<<endl<<findSetRec(a,4)<<endl;
	cout<<a[4];
	return 0;
}
