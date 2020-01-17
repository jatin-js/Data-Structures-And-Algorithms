#include <bits/stdc++.h>
using namespace std;

// void fastscan(unsigned long long &x)
// {
//     bool neg = false;
//     register unsigned long long c;
//     x = 0;
//     c = getchar();
//     if (c == '-')
//     {
//         neg = true;
//         c = getchar();
//     }
//     for (; (c > 47 && c < 58); c = getchar())
//         x = (x << 1) + (x << 3) + c - 48;
//     if (neg)
//         x *= -1;
// }

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    unsigned long long q, n, a, b, sum = 0, c, d, i, j;
    cin >> n;
    // fastscan(n);
    unsigned long long arr[1001][1001];
    for (a = 1; a <= n; a++)
    {
        for (b = 1; b <= n; b++)
            cin >> arr[a][b];
        // fastscan(arr[a][b]);
    }
    cin >> q;
    // fastscan(q);

    while (q >= 1)
    {
        cin >> d >> a >> b >> c;
        // fastscan(d);
        // fastscan(a);
        // fastscan(b);
        // fastscan(c);
        i = 0;
        while (a + i <= b - i)
        {
            if (a + i == b - i)
            {
                arr[a + i][a + i] ^= c;
                if (q == 1)
                    sum += arr[a + i][a + i];
            }
            else
            {
                arr[a + i][a + i] ^= c;
                arr[b - i][b - i] ^= c;
                if (q == 1)
                {
                    sum = sum + arr[a + i][a + i] + arr[b - i][b - i];
                }
            }
            i++;
        }
        q--;
    }
    i = 1;
    a--;
    b++;
    while (i <= a)
    {
        if (i == a)
            sum += arr[i][i];
        else
            sum = sum + arr[i][i] + arr[a][a];
        i++;
        a--;
    }

    i = n;
    while (b <= i)
    {
        if (i == b)
            sum += arr[i][i];
        else
            sum = sum + arr[i][i] + arr[b][b];
        i--;
        b++;
    }

    cout << sum;
    return 0;
}