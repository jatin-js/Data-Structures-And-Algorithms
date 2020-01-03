#include <bits/stdc++.h>
using namespace std;
#define I INT_MAX
int minimum(int a, int b, int c);

int main()
{
    int t, i, j, k, n;
    cin >> t;
    for (i = 0; i < t; i++)
    {

        cin >> n;
        int **path = new int *[n + 1];
        for (j = 0; j <= n; j++)
        {
            path[j] = new int[n + 1];
        }

        for (j = 1; j <= n; j++)
        {
            for (k = 1; k <= n; k++)
            {
                cin >> path[j][k];
            }
        }

        int **dp = new int *[n + 1];
        for (j = 0; j <= n; j++)
        {
            dp[j] = new int[n + 1];
        }
        dp[0][0] = 0;
        for (j = 1; j <= n; j++)
            dp[0][j] = dp[j][0] = I;
        for (j = 1; j <= n; j++)
        {
            for (k = 1; k <= n; k++)
            {
                dp[j][k] = minimum(dp[j - 1][k], dp[j][k - 1], dp[j - 1][k - 1]) + path[j][k];
            }
        }
        cout << dp[n][n] << endl;
    }
    return 0;
}

int minimum(int a, int b, int c)
{
    int min = a;
    if (b < min)
        min = b;
    if (c < min)
        min = c;
    return min;
}