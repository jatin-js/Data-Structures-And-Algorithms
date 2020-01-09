#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, j;
    int arr[] = {1, 101, 2, 3, 100, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int *dp = new int[n + 1];
    for (i = 1; i <= n; i++)
    {
        dp[i] = arr[i - 1];
    }

    for (i = 2; i <= n; i++)
    {
        for (j = 1; j < i; j++)
        {
            if (arr[j - 1] < arr[i - 1] && dp[j] + arr[i - 1] > dp[i])
            {
                dp[i] = dp[j] + arr[i - 1];
            }
        }
    }

    int max = INT_MIN;

    for (i = 1; i <= n; i++)
    {

        if (dp[i] > max)
            max = dp[i];
    }

    cout << max << endl;
    return 0;
}