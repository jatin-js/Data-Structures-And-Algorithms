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
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    //call isCyclic func.
}
bool dfs(vector<int> adj[], vector<bool> &visited, vector<bool> &ances, int u){
    visited[u] = true;
    ances[u] = true;
    for(int i:adj[u]){
        if(!visited[i]){
            if(dfs(adj, visited, ances, i))return true;
        }
        else if(ances[i])return true;
    }
    ances[u] = false;
    return false;
}

bool isCyclic(int V, vector<int> adj[])
{
    int i;
    vector<bool>visited(V, false);
    vector<bool>ances(V, false);
  
    for(i=0;i<V;i++){
            if(!visited[i]){
                if(dfs(adj, visited, ances, i))return true;
            }
    }
    return false;
}