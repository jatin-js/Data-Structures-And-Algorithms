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
    int t;
    cin>>t;
    while(t--){
        int n, k, a, c = 0, ter = 0;
        cin>>n;
        while(1){
            cin>>a;
            cin>>k;
            // cout<<a<<' '<<k<<endl;
            int tempans, res;
            if(a==1){
                cin>>tempans;
                // cout<<tempans<<endl;
                if(tempans==-1){
                    ter = 1;
                    break;
                }
            }
            else{
                cin>>res;
                // cout<<res<<endl;
                if(res==-1){
                    ter=1;
                    break;
                }
            }

        }
        if(ter)break;

    }
}