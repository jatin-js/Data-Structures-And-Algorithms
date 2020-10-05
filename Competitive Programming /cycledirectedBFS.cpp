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

bool bfs(vector<int> adj[], vector<int> &indegree){
    int i;
    
    queue<int> q;
    for(i=0;i<indegree.size();i++){
        if(!indegree[i])q.push(i);
    }
    int c = 0;
    while(q.size()){
        int temp = q.front();
        q.pop();
        c++;
        for(int i:adj[temp]){
            indegree[i]--;
            if(!indegree[i])q.push(i);
        }
    }
    if(c!=indegree.size())return true;
    return false;
}

bool isCyclic(int V, vector<int> adj[])
{
    int i;
    vector<bool>visited(V, false);
    vector<int>indegree(V, 0);
    for(i=0;i<V;i++){
        for(int j:adj[i]){
            indegree[j]++;
        }
    }
    return bfs(adj, indegree);
   
}