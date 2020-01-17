#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long t, q, n, b, a, i, c, min;
    cin >> t;
    for (q = 0; q < t; q++)
    {
        cin >> n >> a >> b;
        i = 0;
        min = INT_MAX;
        while (i <= n)
        {
            c = a * i * i + b * (n - i) * (n - i);
            if (c < min)
                min = c;
            i++;
        }
        cout << min << endl;
    }
    return 0;
}