#include<bits/stdc++.h>
using namespace std;
int main(){
	unordered_map<int, int> m;
	m[1]=2;

    m[1]=1;
    m[100]=2;
    m[3]=3;
    m[4]=4;
    m[5]=5;
    	unordered_map<int, int>::iterator it=m.begin();
    	
    	cout<<&m[1]<<endl;
    //cout<<it->first<<endl;
    //it++;
    //it++;
    //it++;
     //cout<<it->first<<endl;
   // it++;
    //cout<<it->first;
   // cout<<m.size();
   //cout<<m[m.size()+1]; 
  // for(int i=1;i<=m.size();i++)cout<<m[i]<<' ';  // size is 5 only, still it goes upto 100;
   for(; it!=m.end();it++)
    cout<<it->first<<' '<<it->second<<endl;

	return 0;
}
