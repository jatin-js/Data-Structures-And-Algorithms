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
int isSafe(vector<int>g[], vector<int>&color, int node, int i, int m){
    for(int j:g[node]){
        if(color[j]==i)return false;
    }
    return true;
}
int solve(vector<int>g[], vector<int>&color, int m,  int V, int node){
    if(node==V+1)return true;
    int i;
    for(i=1;i<=m;i++){
        if(isSafe(g, color, node, i, m)){
            color[node] = i;
            if(solve(g, color, m,  V, node+1))return true;
            color[node] = 0;
        }
    }
    return false;

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    int t;
    cin>>t;
    while(t--){
        int V, m, E, i;
        cin>>V>>m>>E;
        vector<int>g[V+1];
        vector<int>color(V+1, 0);
        for(i=0;i<E;i++){
            int u, v;
            cin>>u>>v;
            addEdge(g, u, v);
        }
        color[1] = 1;
        cout<<solve(g, color, m, V, 2)<<'\n';

    }
}