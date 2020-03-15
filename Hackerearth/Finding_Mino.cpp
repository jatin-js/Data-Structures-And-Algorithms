#include <bits/stdc++.h>
using namespace std;
int func(int l)
{
    return 2 * l * l - 12 * l + 7;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, l, r, i, j, l1, l2;
    cin >> t;
    while (t--)
    {
        cin >> l >> r;
        for (i = 1; i <= 40000000; i++)
        {
            l1 = l + (r - l) / 3;
            l2 = r - (r - l) / 3;
            (func(l1) > func(l2)) ? r = l2 : l = l1;
        }
        cout << func(l) << endl;
    }

    return 0;
}