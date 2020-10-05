/*Example:-   $ g++ -std=c++14 temp.cpp*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <climits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <unordered_map>

using namespace std;



bool isCycleUtil(vector<int>g[], vector<int> &visited, int u){
    queue<int> q;
    q.push(u);
   visited[u] = 1;
   while(q.size()){
       int temp = q.front();
       q.pop();
       visited[temp] = -1;
     for(int j=0;j<g[temp].size();j++){
         int i = g[temp][j];
           if(visited[i]==1 || i==temp)return true;
           if(!visited[i]){
               q.push(i);
               visited[i] = 1;
           }
       }
   }
  
   return false;
}
bool isCyclic(vector<int> g[], int V)
{
    int i;
    vector<int> visited(V, 0);
  for(i=0;i<V;i++){
      if(!visited[i])if(isCycleUtil(g, visited, i))return true;
  }
  return false;
   
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int V, E, u, v, i;
        cin>>V>>E;
        vector<int>g[V];
        for(i=0;i<E;i++){
            cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        
        cout<<isCyclic(g, V)<<'\n';
    }
} 
 