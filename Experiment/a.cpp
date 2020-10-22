#include<iostream>
#include<vector>
using namespace std;
int main(){
	
	vector<int> v={1,2,3,4,5};
	vector<int>::iterator i=v.end()-1;
	cout<<*i;	
	return 0;

}
