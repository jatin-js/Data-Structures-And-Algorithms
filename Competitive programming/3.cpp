#include <bits/stdc++.h>
using namespace std;
int func(long long m, long long r, long long n, long long l, long long cost[]);

long long c = 0;
int memo[1001][100001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, m, l, cost[100001], i;

    cin >> n >> m >> l;

    // memo = new int *[n + 1];
    // for (i = 0; i <= n; i++)
    // {
    //     memo[i] = new int[n + 1]{0};
    // }
    for (i = 1; i <= l; i++)
    {
        cin >> cost[i];
    }

    func(m, INT_MAX, n, l, cost);
    cout << c % (1000000000 + 7);

    return 0;
}

int func(long long m, long long r, long long n, long long l, long long cost[])
{
    if (r == 0 && n == 0)
        return 1;

    if (r != 0 && n == 0)
        return -1;

    long long i, temp;
    for (i = 1; i <= l; i++)
    {
        temp = r;
        if (r == INT_MAX)
            r = 0;
        else if (cost[i] % m == r)
            r = 0;
        else
            r = m - cost[i] % m;

        if (memo[r][n - 1] == 0)
            memo[r][n - 1] = func(m, r, n - 1, l, cost);
        if (memo[r][n - 1] == 1)
        {
            c++;
            // cout << c;
        }

        r = temp;
    }

    return -1;
}
