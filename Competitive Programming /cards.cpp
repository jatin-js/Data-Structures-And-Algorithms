/*Example:-   $ g++ -std=c++11 c++Template.cpp*/
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
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#define p  1000000007

using namespace std;
static long long dp[10000][10000];

long long perm(long long n, long long r){
    if(n==r || r==0)return 1;
    if(dp[n][r])return dp[n][r];
    return dp[n][r] = (perm(n-1, r-1)%1000000007+perm(n-1, r)%1000000007)%1000000007;
}

long long power(long long x, long long y){
    long long res = 1;
    x = x % p;
    while (y > 0)
    {
        if (y & 1)
            res = ((res % p) * (x % p)) % p;
        y = y >> 1;
        x = ((x % p) * (x % p)) % p;
    }
    return res % p;}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

   long long t;
    cin>>t;
    while(t--){
       long long  n, i;
        cin>>n;
        vector<long long> v(n);
        for(i=0;i<n;i++)cin>>v[i];

    //    long long t = (long long)pow(2, n)%1000000007;
       long long maxno = 0;
       long long max = *max_element(v.begin(), v.end());
        for(i=0;i<n;i++){
            if(v[i]==max)maxno++;
        }
    //    long long s = pow(2, maxno)-2;
    long long s = 0;
        // if(!(maxno%2))s = (perm(maxno, maxno/2)*(long long)pow(2, n-maxno)%1000000007)%1000000007;
        // cout<<t-s<<'\n';
        long long total = (long long)power(2, n)%p;
        if(maxno%2==1){
            cout<<total%p<<'\n';
            continue;
        }
        long long temp = power(2, n-maxno);
        long long comb = perm(maxno, maxno/2);
        long long value =((temp%p)*(comb%p))%p;
        long long ans = (total%p - value%p + p)%p;
        cout<<ans%p<<'\n';

        // if(!(maxno%2))cout<<((1<<n)%1000000007 - perm(maxno, maxno/2)*(((1<<(n-maxno))%1000000007+1000000007)%1000000007))%1000000007;
        // else cout<<(1<<n)%1000000007;
        // cout<<'\n';

    }

}
    
