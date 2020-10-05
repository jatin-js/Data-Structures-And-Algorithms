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
   unsigned long long k, t;
    cin>>k;
    cin>>t;
    while(t--){
        long long n, i;
        cin>>n;

        vector<long long> v(n);
        for(i=0;i<n;i++)v[i] = pow(i+1, k);

        long long sum = 0, j;
        for(i=0;i<n;i++)sum+=v[i];
        i = 0;
        j = n-1;
        long long temp=0, min = INT_MAX;
        string s1, s2;
        while(i<j){
            if(abs(temp+v[i]+v[j]-sum/2) < abs(temp+v[i]-sum/2) && abs(temp+v[i]+v[j]-sum/2) < abs(temp+v[j]-sum/2)){
                if(abs(temp+v[i]+v[j]-sum/2)<min){
                    min = abs(temp+v[i]+v[j]-sum/2);
                    temp+=v[i]+v[j];
                    s1+='1';
                    s2+='1';
                    i++;j--;
                }else break;
            }  
            else if(abs(temp+v[i]-sum/2) < abs(temp+v[i]+v[j]-sum/2) && abs(temp+v[i]-sum/2) < abs(temp+v[j]-sum/2)){
                if(abs(temp+v[i]-sum/2)<min){
                    min = abs(temp+v[i]-sum/2);
                    temp+=v[i];
                    s1+='1';
                    i++;
                } else break;           
            }  
            else {
                if(abs(temp+v[j]-sum/2)<min){
                    min = abs(temp+v[j]-sum/2);
                    temp+=v[j];
                    s2+='1';

                    j--;
                }else break;            
            }
            
        }
        string s;
        if(s1.size()+s2.size()>n/2){
            replace(s1.begin(), s1.end(), '1', '0');
            replace(s2.begin(), s2.end(), '1', '0');
            for(i=0;i<n-s1.size()-s2.size();i++)s+='1';
        }
        else
            for(i=0;i<n-s1.size()-s2.size();i++)s+='0';
        cout<<s1+s+s2<<'\n';
     

    }
}