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
void addEdge(vector<vector<int>>&g, int u, int v, int w){
    g[u][v] = g[v][u] = w;
}
int spanningTree(int V, int E, vector<vector<int>> &g) {
    
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>>minH;
    vector<int>inc(V+1, 0);
    int sum = 0;
    int node = 1;
    int i;
    for(i=1;i<=V;i++){
        if(g[1][i]!=INT_MAX){
            minH.push({g[1][i], {1, i}});
        }
    }
    inc[1] = 1;
    while(minH.size()){  // can also use property that no. of edges in mst will be V-1
        pair<int, pair<int, int>> p = minH.top();
        minH.pop();
        int w = p.first, u = p.second.first, v = p.second.second;
        if(!inc[v]){
            sum+=w;
            inc[v] = 1;
            for(i=1;i<=V;i++){
                if(g[v][i]!=INT_MAX && !inc[i])minH.push({g[v][i], {v, i}});
            }
        }
    }
    return sum;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    int t;
    cin>>t;
    while(t--){
        int V, E, i;
        cin>>V>>E;
        vector<vector<int>>g(V+1, vector<int>(V+1, INT_MAX));
        for(i=0;i<E;i++){
            int u, v, w;
            cin>>u>>v>>w;
            addEdge(g, u, v, w);
        }
       cout<<spanningTree(V, E, g)<<'\n';
        
    }
}