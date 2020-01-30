#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    int a = 0, b = 0;
    cin >> s;
    for (char it : s)
    {
        if (it == 'z')
            a++;
        else
            b++;
    }
    if (2 * a == b)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}