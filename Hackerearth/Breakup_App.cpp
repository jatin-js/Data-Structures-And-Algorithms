#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, i, j;
    string str;
    cin >> n;
    map<string, long long> m;
    cin.ignore();

    while (n--)
    {
        getline(cin, str);
        for (i = 0; i < str.length(); i++)
        {
            if (str[i] >= '1' && str[i] <= '9')
            {
                if (str[i + 1] >= '0' && str[i + 1] <= '9')
                {
                    string str1 = string(1, str[i]) + string(1, str[i + 1]);
                    if (n % 2)
                        m[str1] += 2;
                    else
                        m[str1] += 1;
                    i++;
                }
                else
                {
                    string str1 = string(1, str[i]);
                    if (n % 2)
                        m[str1] += 2;
                    else
                        m[str1] += 1;
                }
            }
        }
    }

    map<string, long long>::iterator it;
    i = m["19"], j = m["20"];

    for (it = m.begin(); it != m.end() && (i != -1 || j != -1); it++)
    {
        if (it->first != "19" && it->first != "20")
        {
            if (it->second >= i)
                i = -1;
            if (it->second >= j)
                j = -1;
        }
    }
    if (i == -1 && j == -1)
        cout << "No Date";
    else
        cout << "Date";

    return 0;
}