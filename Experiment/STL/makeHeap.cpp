#include<bits/stdc++.h>
using namespace std;
int main(){
	//int *a=(int *)malloc(sizeof(int)*7);int i;
    vector<int> v;
    int i;
	for(i=0;i<7;i++)v.push_back(i+1);
	//make_heap(v.begin(), v.end());
	//pop_heap(v.begin(), v.end());
	//v.pop_back();
	//v.push_back(8);
    //push_heap(v.begin(), v.end());
    vector<int>::iterator it = is_heap_until(v.begin(), v.end()-1);
    cout<<*it<<endl;
	for(i=0;i<v.size();i++) cout<<v[i]<<' ';cout<<endl;


	return 0;
}
