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

void addEdge(vector<vector<int>> &adj, int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void DFSUtil(vector<vector<int>> &adj, vector<int> &visited, int u){
    visited[u] = 1;
    cout<<u<<' ';
    int i;
    for(i=0;i<adj[u].size();i++){
        if(!visited[adj[u][i]])DFSUtil(adj, visited, adj[u][i]);
    }
}

void DFS(vector<vector<int>> &adj, int v){
    int i;
    vector<int>visited(v, 0);
    for(i=0;i<v;i++){
        if(!visited[i]){
            DFSUtil(adj, visited, i);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    int v = 5;
    vector<vector<int>> adj(v);
    addEdge(adj, 0, 1); 
    addEdge(adj, 0, 4); 
    addEdge(adj, 1, 2); 
    addEdge(adj, 1, 3); 
    addEdge(adj, 1, 4); 
    addEdge(adj, 2, 3); 
    addEdge(adj, 3, 4); 
    DFS(adj, v); 

}