#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t, q, n, b, a, i, c, min;
    cin >> t;
    for (q = 0; q < t; q++)
    {
        cin >> n >> a >> b;
        i = b * n / (a + b);

        long long a1 = a * i * i + b * (n - i) * (n - i);
        long long b1 = a * (i + 1) * (i + 1) + b * (n - i - 1) * (n - i - 1);
        long long ans = (a1 < b1) ? a1 : b1;

        cout << ans << endl;
    }
    return 0;
}