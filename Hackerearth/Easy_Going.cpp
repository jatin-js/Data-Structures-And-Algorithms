#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t,i,j,n,m, sum, maxsum, minsum;
    long long *arr;
    cin>>t;
    while(t--){
        maxsum=minsum=0;
        cin>>n>>m;

        arr = new long long[n];
        for ( i = 0; i < n; i++)
        {
            cin>>arr[i];         
        }
        sort(arr, arr+n);
        for(i=0;i<n-m;i++){
            minsum+=arr[i];
            maxsum+=arr[n-i-1];
        }
    

        // for(j=0,i=n-m-1;i<n;i++,j++){
            
        //     if(sum>maxsum)maxsum=sum;
        //     if(sum<minsum)minsum=sum;
        //     sum-=arr[j];
        //     sum+=arr[i+1];
        // }
        cout<<maxsum-minsum<<endl;
        
    }
    return 0;
}