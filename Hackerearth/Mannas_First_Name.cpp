#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t, i, j, a, b;
    string str;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        getline(cin, str);
        a = b = 0;
        for (i = 0; i < str.length() - 1; i++)
        {
            if (str[i] == 'S' && str[i + 1] == 'U' && str[i + 2] == 'V' && str[i + 3] == 'O')
            {
                if (i < str.length() - 4 && str[i + 4] == 'J' && str[i + 5] == 'I' && str[i + 6] == 'T')
                {
                    b++;
                }
                else
                    a++;
            }
        }
        cout << "SUVO = " << a << ',' << " SUVOJIT = " << b << endl;
    }
    return 0;
}