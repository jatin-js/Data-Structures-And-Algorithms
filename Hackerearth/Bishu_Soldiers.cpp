#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, *P, i, j, r, p;
    cin >> n;
    P = new int[n];
    for (i = 0; i < n; i++)
        cin >> P[i];
    cin >> r;

    sort(P, P + n);
    map<int, int> m1, m2;
    int sum = 0;
    for (i = 0; i < n; i++)
    {
        m1[P[i]] = i;
        sum += P[i];
        m2[P[i]] = sum;
    }

    while (r--)
    {

        cin >> p;

        int *it = lower_bound(P, P + n, p);
        if (*it != 0)
        {
            cout << m1[*it] + 1 << ' ';
            cout << m2[*it] << endl;
        }
        else
        {
            cout << n << ' ' << m2[P[n - 1]] << endl;
        }
    }

    return 0;
}