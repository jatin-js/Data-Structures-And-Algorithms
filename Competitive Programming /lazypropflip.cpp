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

vector<int> tree(100), lazy(100);

void build(int index, int s, int e, vector<int>&v){
    if(s==e){
        tree[index] = v[s];
        return;
    }
    int mid = (s+e)/2;
    build(2*index, s, mid, v);
    build(2*index+1, mid+1, e, v);
    tree[index] = tree[2*index]+tree[2*index+1];
}

int rangesum(int index, int s, int e, int sq, int eq){
    if(lazy[index]){
        tree[index]=-tree[index];
        if(s!=e){
            lazy[2*index] = !lazy[2*index];
            lazy[2*index+1] = !lazy[2*index+1];
        }
        lazy[index]=0;
    }
    if(s>eq || e<sq)return 0;
    if(s>=sq && e<=eq)return tree[index];
    int mid = (s+e)/2;
    return rangesum(2*index, s, mid, sq, eq) + rangesum(2*index+1, mid+1, e, sq, eq);
}

void update(int index, int s, int e, int sq, int eq){
    if(lazy[index]){
        tree[index]=-tree[index];
        if(s!=e){
            lazy[2*index] = !lazy[2*index];
            lazy[2*index+1] = !lazy[2*index+1];
        }
        lazy[index] = 0;
    }
    if(s>eq || e<sq)return;
    if(s>=sq && e<=eq){
        tree[index] = -tree[index];
        if(s!=e){
          lazy[2*index] = !lazy[2*index];
            lazy[2*index+1] = !lazy[2*index+1];
        }
        return;
    }
    int mid = (s+e)/2;
    update(2*index, s, mid, sq, eq);
    update(2*index+1, mid+1, e, sq, eq);
    tree[index] = tree[2*index]+tree[2*index+1];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    vector<int> v {1,2,3,4,5};
    int n = 5;
    build(1, 0, n-1, v);
    cout<<rangesum(1, 0, n-1, 1, 3);
    update(1, 0, n-1, 1, 3);
    cout<<' '<<rangesum(1, 0, n-1, 0, 4);

}