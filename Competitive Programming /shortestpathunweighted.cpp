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
    g[v].push_back(u);
}
void shortestPath(vector<int>g[], vector<int> &dist, vector<int>&pred, int u){
    queue<int> q;
    q.push(u);
    dist[u] = 0;
    while(q.size()){
        int node = q.front();
        q.pop();
        for(int i:g[node]){
            if(dist[i]==-1){
                dist[i] = dist[node]+1;
                pred[i] = node;
                q.push(i);
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int V, E, i; 
   
    cin>>V>>E;
     vector<int>g[V];
    for(i=0;i<E;i++){
        int u, v;
        cin>>u>>v;
        addEdge(g, u, v);
    }
    vector<int>dist(V, -1);
    vector<int>pred(V, -1);
    int root;
    int dest;
    cin>>root>>dest;
    shortestPath(g, dist, pred, root);
    // for(i=0;i<V;i++)cout<<dist[i]<<' ';
    cout<<dist[dest]<<'\n';
    vector<int>path;
    for(i=dest;pred[i]!=-1;i = pred[i]){
        path.push_back(i);
    }
    path.push_back(i);
    for(i=path.size()-1;i>=0;i--)cout<<path[i]<<' ';
}