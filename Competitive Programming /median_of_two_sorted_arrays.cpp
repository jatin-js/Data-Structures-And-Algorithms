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
int getVal(int arr[], int i, int n){
    if(i==-1)return INT_MIN;
    if(i==n)return INT_MAX;
    return arr[i];
}
int getDirection(int lshort, int rshort, int llong, int rlong, int arr1[], int arr2[], int n, int m){
    if(getVal(arr1, lshort, n) > getVal(arr2, rlong, m))return -1;
    
    if(getVal(arr2, llong, m) > getVal(arr1, rshort, n))return 1;

    return 0;
    
}
int getResult(int arr1[], int arr2[], int lshort, int rshort, int llong, int rlong, int n, int m){
    int o = (n+m)%2;
    if(o){
        return min(getVal(arr1, rshort, n), getVal(arr2, rlong, m));
    }else{
        return (max(getVal(arr1, lshort, n), getVal(arr2, llong, m)) + min(getVal(arr1, rshort, n), getVal(arr2, rlong, m)))/2;
    }
}
int median(int arr1[], int arr2[], int n, int m){
    int l = 0, r = n;
    int lshort, rshort, llong, rlong, d;
    lshort = rshort = llong = rlong = d = 1;
    while(d){
        int mid = (l+r)/2;
        rshort = mid;
        lshort = mid-1;    
        int temp = (n+m)/2;
        rlong = temp - mid;
        llong = rlong - 1;
        d = getDirection(lshort, rshort, llong, rlong, arr1, arr2, n, m);
        if(d<0)r = mid-1;
        else if(d>0)l = mid+1;
    }
    return getResult(arr1, arr2, lshort, rshort, llong, rlong, n, m);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    int arr1[] =   {10, 12, 14, 16, 18, 20};
    int arr2[] =   {2, 3, 5, 8};
    int n = sizeof(arr1)/sizeof(arr1[0]), m = sizeof(arr2)/sizeof(arr2[0]);
    if(n<m)cout<<median(arr1, arr2, n, m);
    else cout<<median(arr2, arr1, m, n);
}