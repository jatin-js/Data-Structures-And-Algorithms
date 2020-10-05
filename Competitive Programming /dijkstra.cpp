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

int findMin(vector<int> &res, vector<int> &temp_res){
    int min_ind = -1, min = INT_MAX, i;
    for(i=0;i<temp_res.size();i++){
        if(res[i]==INT_MAX && temp_res[i]<min){
            min = temp_res[i];
            min_ind = i;
        }
    }
    return min_ind;
}

// void dijkstra(vector<pair<int, int>>g[], int root, vector<int> &res){
//     vector<int> temp_res(res);
//     temp_res[root] = res[root] = 0;
//     int node = root;
//     while(node!=-1){
//         for(auto i:g[node]){
//             if(res[i.first]==INT_MAX && res[node]+i.second<temp_res[i.first])temp_res[i.first] = res[node]+i.second;
//         }
//         node = findMin(res, temp_res);
//         if(node!=-1)res[node] = temp_res[node];
//     }
// }

void dijkstra(vector<pair<int, int>>g[], int root, vector<int> &res){
    set<pair<int, int>>set;
    set.insert({0, root});
    res[root] = 0;
    while(set.size()){
        auto temp = set.begin();
        set.erase(temp);
        int u = temp->second;
        int d = temp->first;
        // res[u] = d;
        for(auto i:g[u]){
            int v = i.first;
            int w = i.second;
            if(res[u]+w<res[v]){
                if(set.find({res[v], v})!=set.end()){
                    set.erase({res[v], v});
                }
                set.insert({res[u]+w, v});
                res[v] = res[u]+w;
            }
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
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
    dijkstra(g, root, res);
    for(int i:res)cout<<i<<' ';
   
}