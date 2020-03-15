#include<iostream>
#include"queue.h"
#include"graph.h"
using namespace std;
#include"graph.cpp"
#include"queue.cpp"
int main(){

	int A[][8]={{0,0,0,0,0,0,0,0},
		     {0,0,1,1,1,0,0,0},
		     {0,1,0,1,0,0,0,0},
	 	     {0,1,1,0,1,1,0,0},
		     {0,1,0,1,0,1,0,0},
		     {0,0,0,1,1,0,1,1},
		     {0,0,0,0,0,1,0,0},
		     {0,0,0,0,0,1,0,0}}; 
       

	BFS(A, 7, 4);
	return 0;		
	

}
