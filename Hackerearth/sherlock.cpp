#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unsigned long long n, k, m, *arr, t, i, p, a;
    cin >> t;
    while (t--)
    {
        unsigned long long c = 0;
        cin >> n >> k >> p;

        unsigned long long arr[10000000] = {0};
        for (i = 1; i <= k; i++)
        {
            cin >> a;
            arr[a] = 1;
        }
        if (n - k < p)
        {
            cout << -1 << endl;
        }
        else
        {
            for (i = 1; i <= n && c != p; i++)
            {
                if (arr[i] == 0)
                    c++;
            }
            cout << i - 1 << endl;
        }
    }
    return 0;
}