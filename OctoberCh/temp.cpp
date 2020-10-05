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
pair<int, int> findRank(vector<int> &arr, int x){
    int i, n = arr.size();
    for(i=0;i<n && arr[i]!=x;i++);
    if(i==n)return {-1, -1};
    int j; 
    for(j=n-1;j>=0 && arr[j]!=x;j--);
    return {i+1, j+1};
   
}
int solve(vector<int> &arr, int n, int x, int p, int k){
    sort(arr.begin(), arr.end());
    if(arr[p-1]==x)return 0;

    pair<int, int>rank = findRank(arr, x);
    
   if(rank.first==-1){
       arr[k-1] = x;
       sort(arr.begin(), arr.end());
       if(arr[p-1]==x)return 1;
       return -1;
    }else{
        if(p>rank.second){
            if(k<p)return -1;
            return p-rank.second;
        }else{
            if(k>p)return -1;
            return rank.first-p;
        }

    }
    return -1;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    int t;
    cin>>t;
    while(t--){
        int n, x, p, k, i;
        cin>>n>>x>>p>>k;
        vector<int>arr(n);
        for(i=0;i<n;i++)cin>>arr[i];
        cout<<solve(arr, n, x, p, k)<<'\n';
    }
}