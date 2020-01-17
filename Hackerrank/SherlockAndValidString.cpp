#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, q, i, n;
    string s;
    cin >> s;
    unordered_map<char, int> m;
    auto a = m.begin();
    for (i = 0; i < n; i++)
    {
        m[s[i]]++;
    }
    int j = 0;
    unordered_map<char, int> m1;

    for (; a != m.end(); a++)
    {
        m1[a->second]++;
    }

    if (m1.size() >= 3)
        cout << "NO";
    else
    {
        auto b = m1.begin();
        auto b1 = b;
        b++;
        if (abs(b - b1) != 1)
            cout << "NO";
    }

    return 0;
}