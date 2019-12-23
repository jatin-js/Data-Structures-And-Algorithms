#include<iostream>
#include<limits.h>
#include"linearProbing.h"
using namespace std;
#include"linearProbing.cpp"
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

int pos;

	if(search(hashT, 45, &pos)){
		deleteNode(hashT, pos); 
	}
	for(int i=0;i<10;i++) cout<<hashT[i]<<' ';
	
	
	return 0;
}
