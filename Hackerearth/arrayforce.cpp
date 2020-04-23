
// Sample code to perform I/O:

// #include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin >> t;
    while (t--)
    {
        long long a0, a1, n, mod, i;
        cin >> a0 >> a1 >> n >> mod;
        //   long long *arr = new long long[n];
        //     arr[0] = a0;
        //     arr[1] = a1;

        //     for(i=2;i<n;i++)arr[i] = (arr[i-1]+arr[i-2])%mod;
        //     // for(i=0;i<n;i++)cout<<arr[i]<<' ';

        //      sort(arr, arr+n);
        // long long a = arr[0], c=1, sum=0;
        // for(i=1;i<n;i++){
        //     if(arr[i] == a)c++;
        //     else{
        //         a = arr[i];
        //         sum += c*c;
        //         c=1;
        //     }
        // }
        // sum+=c*c;
        // cout<<sum<<'\n';
        //   unordered_map<long long, long long> m;
        //   m[a0]++;
        //   m[a1]++;
        // long long a;
        //   for(i=2;i<n;i++){
        //       a = (a0+a1)%mod;
        //       m[a]++;
        //       a0 = a1;
        //       a1 = a;

        //   }
        // long long sum = 0;
        //   for(auto it = m.begin();it!=m.end();it++){
        //       // cout<<it->second<<' ';
        //       sum+=it->second*it->second;
        //   }
        //   cout<<sum<<'\n';

        long long m[100000] = {0};
        m[a0]++;
        m[a1]++;
        long long a;
        for (i = 2; i < n; i++)
        {
            a = (a0 + a1) % mod;
            m[a]++;
            a0 = a1;
            a1 = a;
        }
        long long sum = 0;
        for (long long i = 0; i < mod; i++)
        {
            // cout<<it->second<<' ';
            sum += m[i] * m[i];
        }
        cout << sum << '\n';
    }
}

// Warning: Prlong longing unwanted or ill-formatted data to output will cause the test cases to fail

// Write your code here
