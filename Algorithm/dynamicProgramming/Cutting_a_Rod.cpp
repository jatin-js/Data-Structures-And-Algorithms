#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, j, a;
    int arr[] = {1, 5, 8, 9, 10, 17, 17, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int dp[1001];
    dp[0] = 0;
    for (i = 1; i <= n; i++)
    {
        a = INT_MIN;
        for (j = 1; j <= i; j++)
        {
            a = max(a, arr[j - 1] + dp[i - j]);
        }
        dp[i] = a;
    }
    cout << dp[n];
    return 0;
}

int max(int a, int b)
{
    if (a > b)
        return a;
    return b;
}