#include <bits/stdc++.h>
#include <limits.h>
#define I INT16_MAX
using namespace std;
int minimum(int a, int b, int c);

int main()
{
    int t, i, dp[1001][1001], j, k, a, b, c;
    dp[0][0] = 0;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        string str1, str2;
        cin.ignore();
        getline(cin, str1);
        getline(cin, str2);
        // cout << str1 << ' ' << str2;
        int l1 = str1.length(), l2 = str2.length();
        for (j = 1; j <= l2; j++)
        {
            dp[0][j] = j;
        }
        for (j = 1; j <= l1; j++)
        {
            dp[j][0] = j;
        }
        for (j = 1; j <= l1; j++)
        {
            for (k = 1; k <= l2; k++)
            {
                a = 0;

                if (str1[j - 1] != str2[k - 1])
                    a = 1;

                dp[j][k] = minimum(dp[j][k - 1] + 1, dp[j - 1][k - 1] + a, dp[j - 1][k] + 1);
            }
        }
        // for (j = 0; j <= l1; j++)
        // {
        //     for (k = 0; k <= l2; k++)
        //     {
        //         cout << dp[j][k] << ' ';
        //     }
        //     cout << endl;
        // }
        cout << dp[l1][l2] << endl;
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