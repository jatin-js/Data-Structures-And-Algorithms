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
void addEdge(vector<vector<int>>&g, int u, int v, int w, int e){
    g[e][0] = u;
    g[e][1] = v;
    g[e][2] = w;
}
bool comp(vector<int>v1, vector<int>v2){
    return v1[2]<v2[2];
}
int findP(vector<int>&set, int e){
    if(set[e]<0)return e;
    int rep = findP(set, set[e]);
    return set[e] = rep;
}
void merge(vector<int>&set, int p1, int p2){
    if(p1<p2){
        set[p1] += set[p2];
        set[p2] = p1;
    }else{
        set[p2] += set[p1];
        set[p1] = p2;
    }
}
int krushkal(vector<vector<int>>&g, int V, int E){
    sort(g.begin(), g.end(), comp);
    vector<int>set(V, -1);
    int i = 0, e = 0, sum = 0;
    while(e<V-1){
        int u = g[i][0];
        int v = g[i][1];
        int w = g[i][2];
        int p1 = findP(set, u);
        int p2 = findP(set, v);
        if(p1!=p2){
            sum+=w;
            merge(set, p1, p2);
            e++;
        }
        i++;
    }
    return sum;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int V, E, i; 
    cin>>V>>E;
    vector<vector<int>>g(E, vector<int>(3));
    for(i=0;i<E;i++){
        int u, v, w;
        cin>>u>>v>>w;
        addEdge(g, u, v, w, i);
    }
    cout<<krushkal(g, V, E);
    
}