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
#include <climits>
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
        long long maxinf = INT_MIN, mininf = INT_MAX;
        for(i=0;i<n;i++){
            // vector<int> inf;
            long long c = 1, k;
            long long max = v[i], min = v[i];
           for(j=0;j<i;j++){
               if(v[j]>max)max = v[j];
            //    ind1 = j;
            //    if(v[j]>v[i])c++;
           }  
           for(j=i+1;j<n;j++){
               if(v[j]<min)min = v[j];
            //    ind2 = j;
            //    if(v[j]>v[i])c++;
           }
            // if(max!=v[i])c++;
            // for(k=0;k<ind;k++)if(v[k]>v[i])c++;
            

            for(j=i+1;j<n;j++){
                if(v[j]<max)c++;
            }
            for(j=0;j<i;j++){
                if(v[j]>min)c++;
            }
          
           
           if(c>maxinf)maxinf = c;
           if(c<mininf)mininf = c;
        }
        cout<<mininf<<' '<<maxinf<<'\n';
       }
}