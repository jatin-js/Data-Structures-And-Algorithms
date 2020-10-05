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

using namespace std;

// unsigned long long check(vector<long long> &v, unsigned long long n, unsigned long long sum){
//     unsigned long long i;
//     for(i=0;i<n && sum>0;i++)sum-=v[i];
//     if(sum==0)return 1;
//     return 0;
// }

// unsigned long long poss(unsigned long long &i, unsigned long long &n, unsigned long long &sum){
//     unsigned long long tempsum = i*(i+1)/2, j, c = 0;
//     unsigned long long k = 0;
//     for(j=1;j<=i;j++){
//         if(sum-tempsum+j>n)break;
//         if(sum-tempsum+j<=n && sum-tempsum+j>i){
//             k=1;
//             break;
//         }
//     }
//     if(k)return min(n-(sum-tempsum+j-1), i-j+1);
//     return 0;

// }

long long find(long long sum){
    long long c = -sum*2, a = 1, b = 1;
    long long d = b*b - 4*a*c; 
    double sqrt_val = sqrt(abs(d)); 
    return (-b + sqrt_val)/(2*a);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    unsigned long long t;
    cin>>t;
    while(t--){
        unsigned long long n, i, j;
        cin>>n;
        unsigned long long sum = n*(n+1)/4;
        if(sum*2!=n*(n+1)/2){
            cout<<0<<'\n';
            continue;
        }
        // vector<long long> v(n+1);
        // for(i=0;i<=n;i++)v[i]=i;
        unsigned long long c = 0;
        // for(i=1;i<n;i++){
        //     for(j=i+1;j<=n;j++){
        //         swap(v[i], v[j]);
        //         if(check(v, n, sum))c++;
        //         swap(v[i], v[j]);
        //     }
        // }
        unsigned long long temp = 0;
        // for(i=1;i<n && temp+i<=sum;i++)temp+=i;
        // i--;
        i = find(sum);
        temp = i*(i+1)/2;
        if(temp==sum){
            c=(c+i*(i-1)/2 + (n-i)*(n-i-1)/2);
            // i--;
        }

        // while(sum-i*(i+1)/2<=0)i--;
        // for(;i>=1;i--){
        //     if(sum-i*(i+1)/2+1>n)break;
        //     // c+=min(i, n-(sum-i*(i+1)/2));
        //     unsigned long long temp = (poss(i, n, sum));
        //     if(!temp)break;
        //     c+=temp;
        // }
        cout<<c+(n-i)<<'\n';

        // cout<<c<<'\n';
    }
}