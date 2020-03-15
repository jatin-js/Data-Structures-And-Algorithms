#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, i, j, k, l, count = 0;

    cin >> n;
    char *str = new char[n];
    cin >> str;
    for (i = 0; i < n - 3; i++)
    {
        for (j = n - 1; j > i + 2; j--)
        {
            if (str[i] == str[j])
            {
                for (k = i + 1; k < j - 1; k++)
                {
                    for (l = j - 1; l > k; l--)

                    {

                        if (str[k] == str[l])
                        {
                            count++;
                        }
                    }
                }
            }
        }
    }
    cout << count;

    return 0;
}