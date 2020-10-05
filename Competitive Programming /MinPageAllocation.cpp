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
#define ROW 4 
#define COL 4
using namespace std;
long long count(vector<long long> &v, long long max){
    long long i, c = 0, sum, n = v.size(), j;
    for(i=0;i<n;i++){
        sum=0;
        if(v[i]>max)return INT_MAX;
        for(j=i;j<n && sum+v[j]<=max;j++)sum+=v[j];
        c++;
        i = j-1;
    }
    return c;
}
long long solve(vector<long long> &v, long long m){
    long long n = v.size();
    long long sum = 0, i, max = 0;
    for(i=0;i<n;i++){
        sum+=v[i];
    }
    long long l = 0, r = sum;
    long long ans;
    while(l<=r){
        long long mid = l+(r-l)/2;
        long long c = count(v, mid);
        if(c<=m){
            ans = mid;
            r = mid-1;
        }else l = mid+1;
    }
    return ans;

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    long long t;
    cin>>t;
    while(t--){
        long long n, i;
        cin>>n;
        vector<long long> v(n);
        for(i=0;i<n;i++)cin>>v[i];
        long long m;
        cin>>m;
        if(m>n)cout<<-1;
        else
            cout<<solve(v, m);
        cout<<'\n';
    }

}