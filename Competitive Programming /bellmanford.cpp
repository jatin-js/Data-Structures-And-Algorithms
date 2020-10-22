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

void addEdge(vector<pair<int, int>>g[], int u, int v, int w){
    g[u].push_back({v, w});
}

int bellman(vector<pair<int, int>>g[], int V){
    int i, j;
    vector<int>d(V, INT_MAX);
    d[0] = 0;

    for(i=0;i<V-1;i++){
        for(j=0;j<V;j++){
            for(auto k:g[j]){
                if(d[j]+k.second<d[k.first])d[k.first] = d[j]+k.second;      
            }
        }
    }
    for(j=0;j<V;j++){
            for(auto k:g[j]){
                if(d[j]+k.second<d[k.first])return 1;      
            }
    }
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    int t;
    cin>>t;
    while(t--){
        int V, E;
        cin>>V>>E;
        vector<pair<int, int>>g[V];
        for(int i=0;i<E;i++){
            int u, v, w;
            cin>>u>>v>>w;
            addEdge(g, u, v, w);
        } 
        int root = 0;
        vector<int>res(V, INT_MAX);
        cout<<bellman(g, V)<<'\n';
    }
}