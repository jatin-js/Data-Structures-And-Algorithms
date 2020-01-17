#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, m, g, *rainT, *wetT;
    cin >> n >> m >> g;
    rainT = new long long[n];
    wetT = new long long[m];
    int i;
    for (i = 0; i < n; i++)
    {
        cin >> rainT[i];
    }
    for (i = 0; i < m; i++)
    {
        cin >> wetT[i];
    }
    long long *rainD = new long long[n];
    for (i = 0; i < n - 1; i++)
    {
        rainD[i] = rainT[i + 1] - rainT[i];
    }
    int j, count = 0;

    sort(rainD, rainD + n - 2);
    while (g >= 1)
    {
        for (i = 0; i < n - 1; i++)
        {
            for (j = 0; j < m; j++)
            {
                if (wetT[j] <= rainD[i])
                {
                    wetT[j] = INT_MAX;
                    count++;
                }
            }
        }
        g--;
    }
    cout << count;

    return 0;
}