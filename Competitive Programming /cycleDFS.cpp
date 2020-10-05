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

vector<bool> recStack(10001, false);

using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    //Call isCycle function
    
}



bool dfsUtil(vector<int> adj[], vector<bool> &visited, int u){
    int i;
   
    visited[u] = true;
    recStack[u] = true;

    for(i=0;i<adj[u].size();i++){
        if(!visited[adj[u][i]]){
            if(dfsUtil(adj, visited, adj[u][i]))return true;
            recStack[adj[u][i]] = false;
        }
        else if(recStack[adj[u][i]])return true;
    
    }
    recStack[u] = false;

    

    return false;
}

bool isCyclic(int V, vector<int> adj[])
{
    int i;
        vector<bool>visited(V, false);

   for(i=0;i<V;i++){
//       if(!visited[i])if(dfsUtil(adj, i))return true;
 
    if(!visited[i])
        if(dfsUtil(adj, visited, i))return true;
  }
    
   return false;
   
}