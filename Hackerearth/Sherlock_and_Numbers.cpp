#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t, i, j, l, n, p, k, in;
    map<long long, bool> m;
    cin >> t;
    while (t--)
    {
        m.clear();
        cin >> n >> k >> p;
        long long *a = new long long[k];
        for (i = 1; i <= n; i++)
        {
            m.insert({i, 0});
        }

        for (i = 0; i < k; i++)
        {
            cin >> a[i];
        }
        if (n - k < p)
        {
            cout << -1 << endl;
            continue;
        }
        for (i = 0; i < k; i++)
        {
            m.erase(m.find(a[i]));
        }

        auto it = m.begin();
        for (; --p; it++)
            ;
        cout << it->first << endl;
    }
    return 0;
}