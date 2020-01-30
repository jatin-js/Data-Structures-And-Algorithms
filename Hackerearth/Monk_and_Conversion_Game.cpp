#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t, i, j, n, a, b, sum1, sum2;
    cin >> t;
    while (t--)
    {
        sum1 = sum2 = 0;
        cin >> n;
        // long long a[n], b[n];
        for (i = 0; i < n; i++)
        {
            // cin >> a[i];
            cin >> a;
            sum1 += a;
        }
        for (i = 0; i < n; i++)
        {
            // cin >> b[i];
            cin >> a;
            // sum2 += b;
            sum1 -= a;
        }
        if (sum1 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}