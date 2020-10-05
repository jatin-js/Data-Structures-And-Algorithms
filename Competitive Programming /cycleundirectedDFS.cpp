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
    
}

bool dfs(vector<int>g[], vector<bool> &visited, int u, int parent){
    visited[u] = true;
    for(int j = 0;j<g[u].size();j++){
        int i = g[u][j];
        if(!visited[i]){
            if(dfs(g, visited, i, u))return true;
        }
        else if(parent!=i)return true;
    }
    return false;
}

bool isCyclic(vector<int> g[], int V)
{
    int i;
    vector<bool> visited(V, false);
  for(i=0;i<V;i++){
      if(!visited[i]){
          if(dfs(g, visited, i,-1))return true;
      }
  }
  return false;
   
}