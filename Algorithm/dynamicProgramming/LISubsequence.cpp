#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, arr[1001], dp[1001], n, j, k, max;

    cin >> t;
    for (i = 0; i < t; i++)
    {
        cin >> n;
        for (j = 0; j < n; j++)
        {
            cin >> arr[j];
            dp[j] = 1;
        }
        for (k = 1; k < n; k++)
        {
            for (j = 0; j < k; j++)
            {
                if (arr[j] < arr[k] && dp[j] >= dp[k])
                {
                    dp[k] = dp[j] + 1;
                }
            }
        }
        max = INT_MIN;
        for (j = 0; j < n; j++)
        {
            if (dp[j] > max)
                max = dp[j];
        }
        cout << max << endl;
    }
    return 0;
}