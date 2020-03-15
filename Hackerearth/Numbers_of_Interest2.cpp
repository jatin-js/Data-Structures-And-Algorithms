#include <bits/stdc++.h>
using namespace std;

int x(int n)
{
    int i, p;
    for (i = 2; n / i >= 2; i++)
    {
        if (n % i == 0 && n % (n / i) == 0)
        {
            p = n / i;
        }
    }
    return p;
}

int f(int n)
{
    if (n = 0 || n == 1)
        return 0;
    return (f(n - 1) + x(n));
}

int y(int n)
{
    int i, p = 0;
    for (i = 2; n / i >= 2; i++)
    {
        if (n % i == 0 && n % (n / i) == 0)
        {
            p += n / i;
        }
    }
    return p;
}

int g(int n)
{
    if (n == 0 || n == 1)
        return 0;
    return (g(n - 1) + y(n));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, i, j, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << (f(n) + g(n)) % n << endl;
    }
    return 0;
}