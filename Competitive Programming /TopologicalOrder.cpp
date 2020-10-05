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
void addEdge(vector<int>g[], int u, int v){
    g[u].push_back(v);
}
void calcInd(vector<int>g[], vector<int>&indegree, int V){
    int i;
    for(i=0;i<V;i++){
        for(int j:g[i])indegree[j]++;
    }
}
vector<int> TSort(vector<int>g[], int V){
   vector<int>indegree(V, 0);
   calcInd(g, indegree, V);
   vector<int>T;
   queue<int>q;
   int i;
   for(i=0;i<V;i++){
       if(!indegree[i])q.push(i);
   }
   while(q.size()){
       int node = q.front();
       q.pop();
       T.push_back(node);
       for(int i:g[node]){
           indegree[i]--;
           if(!indegree[i])q.push(i);
       }
   }
   return T;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    int t;
    cin>>t;
    while(t--){
        int V, E, i;
        cin>>V>>E;
        vector<int>g[V];
        for(i=0;i<E;i++){
            int u, v;
            cin>>u>>v;
            addEdge(g, u, v);
        }
        vector<int>res(TSort(g, V));
        for(i=0;i<V;i++)cout<<res[i]<<' ';
    }
}