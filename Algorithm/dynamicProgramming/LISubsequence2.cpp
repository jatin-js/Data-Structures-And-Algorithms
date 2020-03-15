#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, i, arr[100000], n, d[100000], j, k = 0, l;

    cin >> n;
    for (i = 0; i < n; i++)
        cin >> arr[i];
    d[0] = arr[0];
    for (j = 1; j < n; j++)
    {
        if (arr[j] > d[k])
        {
            d[++k] = arr[j];
        }
        else
        {
            for (l = k; l >= 0 && d[l] > arr[j]; l--)
                ;

            d[l + 1] = arr[j];
        }
    }
    cout << k + 1;

    return 0;
}