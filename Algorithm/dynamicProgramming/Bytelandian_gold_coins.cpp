#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, i, n, j, dp[1000000001] = {0}, p = 0;
    dp[0] = 0;
    while (cin >> n)
    {
        if (n <= 12)
            cout << n << endl;
        else if (dp[n] != 0)
            cout << dp[n] << endl;
        else
        {
            for (j = p; j <= n; j++)
            {
                dp[j] = max(j, dp[j / 2] + dp[j / 3] + dp[j / 4]);
            }

            cout << dp[n] << endl;
            if (n > p)
                p = n;
        }
    }

    return 0;
}

long long int max(long long int a, long long int b)
{
    return (a > b) ? a : b;
}
