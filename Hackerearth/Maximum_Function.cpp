#include <bits/stdc++.h>
using namespace std;

long long calcS(long long A[], long long Y, long long n)
{
    long long s = 0;
    for (long long i = 1; i <= n; i++)
    {
        if (A[i] - Y * i > 0)
            s += A[i] - Y * i;
    }
    return s;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t, q, n, k, *A, i, j;
    cin >> t;
    for (q = 0; q < t; q++)
    {
        cin >> n >> k;
        A = new long long[n + 1];
        for (i = 1; i <= n; i++)
            cin >> A[i];

        long long Y = *max_element(A, A + n + 1) * n;

        long long s = 0;
        while (s < k)
        {
            s = calcS(A, Y, n);

            Y--;
        }
        cout << Y + 1 << ' ' << s << endl;
    }
    return 0;
}