#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l, m, n, k, i, min, count, p;
    int l1 = 0, m1 = 0, l2, m2;
    int e = 0;
    int cap = 0;

    cin >> l;
    cin >> m;
    cin >> n;
    cin >> k;
    count = n;
    int arr[1001];

    for (i = 1; i <= n; i++)
    {
        arr[i] = 1;
    }

    while (e != n)
    {
        e = 0;
        for (i = 1; i <= n; i++)
        {

            if ((arr[i] < k && l1 < l && (l1 - m1 == 0 || m1 - l1 == 1)) || (arr[i] < k && m1 < m && (l1 - m1 == 0 || l1 - m1 == 1)))
            {
                if (arr[i] < k && l1 < l && (l1 - m1 == 0 || m1 - l1 == 1))
                {
                    arr[i]++;
                    l1++;
                }
                if (arr[i] < k && m1 < m && (l1 - m1 == 0 || l1 - m1 == 1))
                {
                    arr[i]++;
                    m1++;
                }
            }
            else
                e++;
        }
    }

    if (l1 == l && m1 == m)
        cout << n;
    else
    {
        l1 = l - l1;
        m1 = l - m1;
        while (l2 != l1 || m2 != m1)
        {
            cap = 0;

            while (cap < k && abs(l2 - m2) <= 1)
            {
                if (l2 < l1 || (m2 < m1 && cap < k))
                {
                    if (l2 < l1)
                    {
                        l2++;
                        cap++;
                    }
                    if (m2 < m1 && cap < k)
                    {
                        m2++;
                        cap++;
                    }
                }
                else
                {
                    p = 1;
                    break;
                }
            }
            count++;
            l1 = l1 - l2;
            m1 = m1 - m2;
            l2 = m2 = 0;
            if (p == 1)
                break;
        }
    }
    cout << count;
    return 0;
}
