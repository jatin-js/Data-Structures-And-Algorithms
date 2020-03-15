#include<iostream>
#include<limits.h>
#include"doubleHashing.h"
using namespace std;
#include"doubleHashing.cpp"
int main(){
	//arr element = null
	int hashT[10];
	int i, data;	
	for(i=0;i<10;i++)hashT[i]=0;
	insert(hashT, 31);
	insert(hashT, 45);
	insert(hashT, 67);
	insert(hashT, 79);
	insert(hashT, 84);	
	insert(hashT, 62);
	insert(hashT, 92);
	insert(hashT, 52);
	insert(hashT, 99);
	insert(hashT, 10);


int pos=0;
	for(int i=0;i<10;i++) cout<<hashT[i]<<' ';
	cout<<endl;

	if(search(hashT, 52, &pos)){
		deleteNode(hashT, pos); 
	}
	for(int i=0;i<10;i++) cout<<hashT[i]<<' ';
	
	
	return 0;
}
