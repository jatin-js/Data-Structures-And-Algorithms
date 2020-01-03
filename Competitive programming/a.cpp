#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int t, i, n, b, j, count = 0, c1 = 0, c2 = 0;
    string str;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        cin >> n;
        map<string, vector<int>> check;
        for (j = 0; j < n; j++)
        {
            cin >> str;
            cin >> b;
            if (b == 1)
            {
                c1 += 1;
                check.insert(pair<string, vector<int, int>>(str, (c1, c2)));
            }
            else
                check[str][1] += 1;
        }
        struct k = check.begin();
        while (k != check.end())
        {
            if (k->second[0] > k->second[1])
                count += k->second[0];
            else
                count += k->second[1];
            k++;
        }
        cout << count << endl;
    }
    return 0;
}
