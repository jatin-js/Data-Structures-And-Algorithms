#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, m, k, pr, i, j, count = 0, f = 0;
    cin >> n >> m >> k;
    map<long long, long long> c;
    for (i = 1; i <= m; i++)
    {
        c[i] = 0;
    }
    for (i = 1; i <= n; i++)
    {
        cin >> pr;
        if (f == 1)
            count++;
        else
        {
            auto it = c.lower_bound(pr);
            if (it == c.end())
                it = c.begin();

            if (it->first != pr)
                count++;
            if (++it->second == k)
                c.erase(it);

            if (c.size() == 0)
            {
                f = 1;
            }
        }
    }

    cout << count;

    return 0;
}