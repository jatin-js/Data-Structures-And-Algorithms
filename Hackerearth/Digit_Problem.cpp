#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i, k;
    string str;
    cin >> str;
    cin >> k;
    for (i = 0; i < str.length() && k != 0; i++)
    {
        if (str[i] != '9')
        {
            str[i] = '9';
            k--;
        }
    }
    cout << str;
}