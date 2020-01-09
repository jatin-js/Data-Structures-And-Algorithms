#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, k, j;
    string str;
    cin >> str;
    int n = str.length();
    int dp[1001][1001];
    for (i = 1; i <= n; i++)
    {
        k = i;
        for (j = 1; j <= n - i + 1; j++)
        {
            if (j == k)
                dp[j][k] = 1;
            // else if (k - j == 1)
            // {
            //     if (str[j - 1] == str[k - 1])
            //         dp[j][k] = 2;
            //     else
            //         dp[j][k] = 1;
            // }

            else if (dp[j] == dp[k] && i == 2)
                dp[j][k] = 2;
            else if (str[j - 1] == str[k - 1])
                dp[j][k] = 2 + dp[j + 1][k - 1];
            else
                dp[j][k] = max(dp[j][k - 1], dp[j + 1][k]);
            k++;
        }
    }

    cout << dp[1][n];

    return 0;
}

int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}