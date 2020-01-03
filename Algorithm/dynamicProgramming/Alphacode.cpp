#include <bits/stdc++.h>
using namespace std;
long long int check(char a, char b, long long int *dp, int i);

int main()
{
    int i;
    string t;
    while (cin >> t)
    {
        if (t[0] == '0')
            break;
        long long int *dp = new long long int[t.length() + 1];
        dp[0] = dp[1] = 1;
        for (int i = 1; i < t.length(); i++)
        {
            dp[i + 1] = dp[i] + check(t[i - 1], t[i], dp, i);
        }
        cout << dp[t.length()] << endl;
    }

    return 0;
}
long long int check(char a, char b, long long int *dp, int i)
{
    if (a == '1' || (a == '2' && b <= '6'))
        return dp[i - 1];
    else
        return 0;
}