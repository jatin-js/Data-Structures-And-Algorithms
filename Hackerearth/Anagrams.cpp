#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, i, j;
    cin >> t;
    // cin.ignore();
    while (t--)
    {
        int h[26] = {0};
        string s1, s2, sm;
        // getline(cin, s1);
        // getline(cin, s2);
        cin >> s1 >> s2;
        for (i = 0; i < s1.length(); i++)
        {
            h[s1[i] - 'a']++;
        }
        for (i = 0; i < s2.length(); i++)
        {
            h[s2[i] - 'a']--;
        }

        int sum = 0;
        for (i = 0; i < 26; i++)
        {
            sum += abs(h[i]);
        }
        cout << sum << endl;
    }
    return 0;
}