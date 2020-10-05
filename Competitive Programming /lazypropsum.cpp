#include <iostream>
#include<vector>
using namespace std;
int lazy[1000];
int rangesum(vector<int> &tree, vector<int> &lazy, int index, int s, int e, int sq, int eq){
    
    if(lazy[index]){
        tree[index] += (e-s+1)*lazy[index];
        if(s!=e){
            lazy[2*index]+=lazy[index];
            lazy[2*index+1]+=lazy[index];
        }
        lazy[index] = 0;
    }
    
    if(s>eq || e<sq)return 0;
    
    if(s>=sq && e<=eq)return tree[index];
    int mid = (s+e)/2;
    return rangesum(tree, lazy, 2*index, s, mid, sq, eq) + rangesum(tree, lazy, 2*index+1, mid+1, e, sq, eq);
}

void build( vector<int> &tree, int index, vector<int> &v, int s, int e){
    
    
    if(s==e){
        tree[index] = v[s];
        return;
    }
    
    int mid = (s+e)/2;
    build(tree, 2*index, v, s, mid);
    build(tree, 2*index+1, v, mid+1, e);
    tree[index] = tree[2*index]+tree[2*index+1];
}

void updaterange(vector<int> &tree, vector<int> &lazy, int index, int s, int e, int sq,int eq, int val){
    
    if(lazy[index]){
        tree[index]+=(e-s+1)*lazy[index];
        if(e!=s){
            lazy[2*index] += lazy[index];
            lazy[2*index+1] += lazy[index];
        }
        lazy[index]= 0;
    }
    
    
    if(s>eq || e<sq)return;
    
    if(s>=sq && e<=eq){
        tree[index] += (e-s+1)*val;
        if(s!=e){
            lazy[2*index] += val;
            lazy[2*index+1] += val;
        }
        return;
    }
    int mid = s+(e-s)/2;
    updaterange(tree, lazy, 2*index, s, mid, sq, eq, val);
    updaterange(tree, lazy, 2*index+1, mid+1, e, sq, eq, val);
    tree[index] = tree[2*index]+tree[2*index+1];
}

int main() {

    int n, i;
    cin>>n;
    vector<int> v(n);
    for(i=0;i<n;i++)cin>>v[i];
    
    vector<int> tree(4*n+1), lazy(4*n+1, 0);
    
    build(tree, 1, v, 0, n-1);
    cout<<rangesum(tree, lazy, 1, 0, n-1, 1, 3)<<' ';

    updaterange(tree, lazy, 1, 0, n-1, 1, 4, 8);
    
      cout<<rangesum(tree, lazy, 1, 0, n-1, 1, 3)<<' ';

    

}