#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <map>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n;
        string str;
        cin >> str;
        map<char, int> m;
        for (i = 0; i < n; i++)
        {
            m[str[i]]++;
        }
        for (auto it : m)
        {
            if (it.second == 1)
            {
                cout << it.first << endl;
                continue;
            }
            cout << -1 << endl;
        }
    }
    return 0;
}