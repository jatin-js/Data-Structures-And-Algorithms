#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long i, n, *arr;
    cin >> n;
    arr = new long[n];
    for (i = 0; i < n; i++)
        cin >> arr[i];
    long k;
    cin >> k;

    long size = *max_element(arr, arr + n) + 1;
    long *H = new long[size]{0};
    for (i = 0; i < n; i++)
    {
        H[arr[i]]++;
    }

    for (i = 0; i <= size && H[i] != k; i++)
        ;

    cout << i;

    return 0;
}