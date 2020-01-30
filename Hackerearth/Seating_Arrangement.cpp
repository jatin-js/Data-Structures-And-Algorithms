#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t, i, j, sn, k, fs;
    cin >> t;
    while (t--)
    {
        i = 12;
        cin >> sn;
        while (i < sn)
            i += 12;
        j = i - 11;
        k = i - 6;

        fs = i + j - sn;
        cout << fs << ' ';

        if (sn <= k)
        {
            if (sn == j || sn == j + 5)
                cout << "WS";
            else if (sn == j + 1 || sn == j + 4)
                cout << "MS";
            else
                cout << "AS";
        }
        else
        {
            if (sn == i || sn == i - 5)
                cout << "WS";
            else if (sn == i - 1 || sn == i - 4)
                cout
                    << "MS";
            else
                cout << "AS";
        }
        cout << endl;
    }
    return 0;
}