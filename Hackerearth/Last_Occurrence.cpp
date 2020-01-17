#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, m, *arr;
    cin >> n >> m;
    arr = new long long[n + 1];
    long long p = -1;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        if (arr[i] == m)
            p = i;
    }

    cout << p;

    return 0;
}