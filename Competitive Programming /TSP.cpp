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
    g[v].push_back({u, w});
}
void TSP(vector<pair<int, int>>g[], vector<int>&inc, vector<int>&path, vector<int>&temp_path, int V, int node, int &cost, int temp_cost){
    if(temp_path.size()==V){
        for(auto i:g[node]){
            if(i.first==temp_path[0]){
                    if(temp_cost+i.second<cost){
                    cost = temp_cost + i.second;
                    path = temp_path;
                    path.push_back(temp_path[0]);   
                }
                return;
            }
        }
        
    return;
    }
    for(auto i:g[node]){
        if(!inc[i.first]){
            inc[i.first] = 1;
            temp_path.push_back(i.first);
            TSP(g, inc, path, temp_path, V, i.first, cost, temp_cost+i.second);
            inc[i.first] = 0;
            temp_path.pop_back();

        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    int t;
    cin>>t;
    while(t--){
        int V, E, i;
        cin>>V>>E;
        vector<pair<int, int>>g[V+1];
        for(i=0;i<E;i++){
            int u, v, w;
            cin>>u>>v>>w;
            addEdge(g, u, v, w);
        }
        vector<int> path;
        vector<int>inc(V+1, 0);
        vector<int> temp_path;
        inc[1] = 1;
        temp_path.push_back(1);
        int cost = INT_MAX;
        TSP(g, inc, path, temp_path, V, 1, cost, 0);
        cout<<cost<<'\n';
        for(i=0;i<=V;i++)cout<<path[i]<<' ';
        break;
        
        cout<<'\n';
        

       
        
    }
}