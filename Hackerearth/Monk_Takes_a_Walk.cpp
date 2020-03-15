#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t, i, j;
    cin >> t;
    string str;
    long long count;
    while (t--)
    {
        count = 0;
        cin >> str;
        for (long long i = 0; i < str.length(); i++)
        {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            {
                count += 1;
            }
        }
        cout << count << endl;
    }
    return 0;
}