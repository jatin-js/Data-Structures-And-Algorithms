#include <bits/stdc++.h>
using namespace std;

int main()
{
    int64_t t, n, i;
    cin >> t;
    while (t--)
    {
        cin >> n;
        i = 0;
        while (1)
        {
            int64_t nob = floor(log2(n)) + 1;
            int64_t a = ((1 << nob) - 1) ^ n;
            if (a >= 1 && a <= n)
            {
                n -= a;
                i++;
            }
            else
                break;
        }

        if (i % 2 == 1)
            cout << "Jatin" << endl;
        else
            cout << "Pranshu" << endl;
    }
    return 0;
}