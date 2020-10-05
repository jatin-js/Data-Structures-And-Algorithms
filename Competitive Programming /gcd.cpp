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

void build1(vector<long long> &tree, long long index, long long s, long long e, vector<long long>&v){
    if(s==e){
        tree[index] = v[s];
        return;
    }
    long long mid = s+(e-s)/2;
    build1(tree, 2*index, s, mid, v);
    build1(tree, 2*index+1, mid+1, e, v);
    tree[index] = max(tree[2*index], tree[2*index+1]);
    
}

void build2(vector<long long> &tree, long long index, long long s, long long e, vector<long long>&v){
    if(s==e){
        tree[index] = v[s];
        return;
    }
    long long mid = s+(e-s)/2;
    build2(tree, 2*index, s, mid, v);
    build2(tree, 2*index+1, mid+1, e, v);
    tree[index] = tree[2*index]+tree[2*index+1];
    }

void update1(vector<long long> &tree1, vector<long long> &tree2, long long index, long long s, long long e, long long sq, long long eq, long long val){
    if(s>eq || e<sq)return;
    if(s==e){
        tree1[index] = tree2[index] = val;
        return;
    }
    long long mid = s+(e-s)/2;
    update1(tree1, tree2, 2*index, s, mid, sq, eq, val);
     update1(tree1, tree2, 2*index+1, mid+1, e, sq, eq, val);
    tree1[index] = max(tree1[2*index], tree1[2*index+1]);
    tree2[index] = tree2[2*index]+tree2[2*index+1];

    
}  
long long gcd(long long a, long long b) 
{ 
    if(a>b)swap(a,b);
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
}   

void update2(vector<long long> &tree1, vector<long long> &tree2, long long index, long long s, long long e, long long sq, long long eq, long long val){
     if(s>eq || e<sq)return;
    if(s==e){
        tree1[index] = tree2[index] =gcd(tree1[index], val);
        return;
    }
    long long mid = s+(e-s)/2;
    update2(tree1, tree2, 2*index, s, mid, sq, eq, val);
     update2(tree1, tree2, 2*index+1, mid+1, e, sq, eq, val);
    tree1[index] = max(tree1[2*index], tree1[2*index+1]);
    tree2[index] = tree2[2*index]+tree2[2*index+1];

}

long long query1(vector<long long> &tree, long long index, long long s, long long e, long long sq, long long eq){
    if(s>eq || e<sq)return INT_MIN;
    if(s>=sq && e<=eq)
        return tree[index];
    long long mid = s+(e-s)/2;
    return max(query1(tree, 2*index, s, mid, sq, eq), query1(tree, 2*index+1, mid+1, e, sq, eq));
    
}
long long query2(vector<long long> &tree, long long index, long long s, long long e, long long sq, long long eq){
    if(s>eq || e<sq)return 0;;
    if(s>=sq && e<=eq)
        return tree[index];
    long long mid = s+(e-s)/2;
    return query2(tree, 2*index, s, mid, sq, eq)+query2(tree, 2*index+1, mid+1, e, sq, eq);
    
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    long long n, m, i;
    cin>>n>>m;
    vector<long long> v(n);
    for(i=0;i<n;i++)cin>>v[i];
    vector<long long> tree1(4*n+1);
    vector<long long> tree2(4*n+1);
    build1(tree1, 1, 0, n-1, v);
    build2(tree2, 1, 0, n-1, v);
    while(m--){
        long long q, l, r, x;
        cin>>q;
        if(q==1){
            cin>>l>>r>>x;
            l--;r--;
            update1(tree1, tree2, 1, 0, n-1, l, r, x);
        }
        else if(q==2){
            cin>>l>>r>>x;
            l--;r--;
            update2(tree1, tree2, 1, 0, n-1, l, r, x);   
        }
        else if(q==3){
            cin>>l>>r;
            l--;r--;
            cout<<query1(tree1, 1, 0, n-1, l, r);
        }
        else{
            cin>>l>>r;
            l--;r--;
            cout<<query2(tree2, 1, 0, n-1, l, r);
        }
        cout<<'\n';

    }

}