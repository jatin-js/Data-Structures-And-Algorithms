#include <bits/stdc++.h>
using namespace std;
int maximum(int a, int b);
int main()
{
    int t, i, nof, noe, dp[1001][1001], j, a, k;

    cin >> nof >> noe;
    for (i = 1; i <= noe; i++)
    {
        dp[i][1] = 1;
        dp[i][0] = 0;
    }
    for (i = 1; i <= nof; i++)
        dp[1][i] = i;

    for (i = 2; i <= noe; i++)
    {
        for (j = 2; j <= nof; j++)
        {
            dp[i][j] = INT_MAX;
            for (k = 1; k <= j; k++)
            {
                a = 1 + maximum(dp[i][k - 1], dp[i - 1][j - k]);
                if (a < dp[i][j])
                    dp[i][j] = a;
            }
        }
    }
    cout << dp[noe][nof];

    return 0;
}

int maximum(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}