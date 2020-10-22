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
    int k, n, i;
    cin>>k>>n;
    vector<int>v(n);
    for(i=0;i<n;i++)cin>>v[i];
    int Min = INT_MAX, Max = INT_MIN;
    for(i=0;i<n;i++){
        if(v[i]<Min)Min = v[i];
        if(v[i]>Max)Max = v[i];
    }
    // cout<<Max<<' '<<Min<<'\n'; 
    int ans = Max - Min;
    int small = Min + k;
    int big = Max - k;
    // cout<<big<<' '<<small<<'\n';
    if(small>big)swap(small, big);
    for(i=0;i<n;i++){
        if(v[i]+k<=big || v[i]-k>=small)continue;
        if(v[i]+k - small<big - v[i]+k)big = v[i]+k;
        else small = v[i]-k;
    }
    // cout<<small<<' '<<big<<'\n';
    cout<<min(ans, big - small);

}