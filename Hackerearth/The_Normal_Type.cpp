#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, *arr;
    cin >> n;
    arr = new long long[n + 1];
    long long i;
    for (i = 1; i <= n; i++)
        cin >> arr[i];
    long long j, a, b, count = 0, c = 0;
    unordered_map<long long, long long> m;

    for (i = 1; i <= n; i++)
    {
        m[arr[i]] = 1;
    }

    long long l = m.size();
    m.clear();
    j = 1;
    for (i = 1; i <= n; i++)
    {
        while (j <= n && c < l)
        {
            m[arr[j]]++;
            if (m[arr[j]] == 1)
            {
                c++;
            }
            j++;
        }
        if (c == l)
        {
            count += (n - j + 2); //+2 instead of +1 because j increase by one when c=l
        }

        m[arr[i]]--;
        if (m[arr[i]] == 0)
            c--;
    }

    cout << count;
    return 0;
}