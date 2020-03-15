#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int maximum(int a, int b, int c);

int main()
{
    int t, i, dp[1001][1001], n, j, a, m;
    string arr1, arr2, LCS;
    cin >> arr1 >> arr2;
    n = arr1.length();
    m = arr2.length();

    for (i = 0; i <= n; i++)
    {
        dp[i][0] = 0;
    }

    for (i = 1; i < m; i++)
    {
        dp[0][i] = 0;
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            a = 0;
            if (arr1[i - 1] == arr2[j - 1])
                a = 1;
            dp[i][j] = maximum(dp[i][j - 1], dp[i - 1][j], dp[i - 1][j - 1] + a);
        }
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            cout << dp[i][j] << ' ';
        }
        cout << endl;
    }

    cout << dp[n][m];
    i = n;
    j = m;
    while (i >= 1 && j >= 1)
    {
        if (dp[i][j] == dp[i][j - 1])
            j--;
        else if (dp[i][j] == dp[i - 1][j])
            i--;
        else
        {
            LCS += arr1[i - 1];
            i--;
            j--;
        }
    }
    for (i = LCS.length(); i >= 0; i--)
        cout << LCS[i] << ' ';
    return 0;
}

int maximum(int a, int b, int c)
{
    int max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    return max;
}
