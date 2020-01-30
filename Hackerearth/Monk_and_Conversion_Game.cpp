#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t, i, j, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        long long a[n], b[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (i = 0; i < n - 1; i++)
        {
            if (a[i] > b[i])
            {
                a[i + 1] = a[i + 1] + a[i] - b[i];
            }
            else if (a[i] < b[i])
            {
                a[i + 1] = a[i + 1] - a[i] + b[i];
            }
            a[i] = b[i];
        }
        if (a[n - 1] == b[n - 1])
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}