#include<iostream>
#include"stack.h"
#include"graph.h"
using namespace std;
#include"graph.cpp"
#include"stack.cpp"
int main(){

	int A[][8]={ {0,0,0,0,0,0,0,0},
		     {0,0,1,1,1,0,0,0},
		     {0,1,0,1,0,0,0,0},
	 	     {0,1,1,0,1,1,0,0},
		     {0,1,0,1,0,1,0,0},
		     {0,0,0,1,1,0,1,1},
		     {0,0,0,0,0,1,0,0},
		     {0,0,0,0,0,1,0,0}}; 
       

	DFSRec(A, 7, 1);
	return 0;		
	

}
