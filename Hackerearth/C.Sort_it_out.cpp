#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t,i,j, *arr, max;
        max=INT_MIN;
        long long n;
        cin>>n;
        arr = new long long[n];
        for(i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]>max)max=arr[i];
        }
        long long b[max+1][2];
        for(i=0;i<=max;i++){b[i][0]=-1;b[i][1]=0;
        for(i=0;i<n;i++){
            b[arr[i]][0]=i;
            b[arr[i]][1]++;
        }
        for(i=0;i<=max;i++){
            if(b[i][0]!=-1){
                cout<<b[i][0]<<' ';
                b[i][1]--;
                if(b[i][1])
            }
        }
    
    return 0;
}