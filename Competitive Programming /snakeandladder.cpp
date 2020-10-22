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

int solve(vector<int> &board){
    int i, j, c = 0;
    queue<int> q;
    vector<bool>visited(31, false);
    q.push(1);
    visited[1] = true;
    while(q.size()){
        int n = q.size();
        for(i=0;i<n;i++){
            int node = q.front();
            q.pop();
            for(j=node+1;j<=node+6;j++){
                if(board[j]!=-1){
                    if(board[j] == 30)return c+1;
                    if(!visited[board[j]]){
                        q.push(board[j]);
                        visited[board[j]] = true;
                    }
                }else{
                    if(j==30)return c+1;
                    if(!visited[j]){
                        q.push(j);
                        visited[j] = true;
                    }
                } 
            }
        }
        c++;
    }
    return c+1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    int t;
    cin>>t;
    while(t--){
        int n, a, b, i;
        vector<int>board(31, -1);
        cin>>n;
        for(i=0;i<n;i++){
            cin>>a>>b;
            board[a] = b;
        }
        cout<<solve(board)<<'\n';
    }
}