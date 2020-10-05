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
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    long long t;
    cin>>t;
    while(t--){
        long long n, i, j, c = 0;
        cin>>n;
        vector<long long>v(n);
        for(i=0;i<n;i++)cin>>v[i];
        vector<long long>min(n, 0);
        for(i=0;i<n-1;i++){
            // if(i==n-1)continue;
            for(j=i+1;j<n;j++){
                if(v[j]<v[i])min[i]++;
            }
        }
        for(i=1;i<n;i++){
            // if(i==0)v[i]=;
            for(j=i-1;j>=0;j--){
                if(v[j]>v[i])min[i]++;
            }
        }
        sort(min.begin(), min.end());
        cout<<min[0]+1<<' '<<min[n-1]+1;
        cout<<'\n';
       }
}

#include<iostream>
using namespace std;
int main(){
    int a = 0;
    cout<<a;
}