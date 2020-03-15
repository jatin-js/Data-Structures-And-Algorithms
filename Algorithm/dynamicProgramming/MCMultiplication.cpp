#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, n, j, a, min, dp[1001][1001], k, b[1001][1001], p, l;
    int r[1001], c[1001];
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cin >> r[i];
        cin >> c[i];
        dp[i][i] = 0;
    }
    for (i = 1; i < n; i++)
    {
        l = 1;
        for (j = i + 1; j <= n; j++)
        {
            min = INT_MAX;

            for (k = l; k < j; k++)
            {
                a = dp[l][k] + dp[k + 1][j] + r[l] * c[k] * c[j];
                if (a < min)
                {

                    p = k;
                    min = a;
                }
            }
            l++;
            dp[l][j] = min;

            b[l][j] = p;
        }
    }
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            cout << dp[i][j] << ' ';
        }
        cout << endl;
    }
    cout << dp[1][n];

    return 0;
}