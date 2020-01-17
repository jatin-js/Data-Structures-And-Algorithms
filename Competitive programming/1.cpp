#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int i, k, n, j;
    cin >> n >> k;
    long long int *arr = new long long int[n + 1];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    i = 0;
    j = n - 1;
    while (i < n && arr[i] <= k)
    {
        i++;
    }

    while (j >= i && arr[j] <= k)
    {
        j--;
    }

    cout << j - i + 1;

    return 0;
}