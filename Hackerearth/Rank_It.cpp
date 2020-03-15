#include <bits/stdc++.h>
using namespace std;
long long binarySearch(long long A[], long long n, long long key)
{
    long long s = 1, e = n, mid;
    while (s <= e)
    {
        mid = (s + e) / 2;
        if (key > A[mid])
            s = mid + 1;
        else if (key < A[mid])
            e = mid - 1;
        else
            return mid;
    }
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, *A, i, j;
    cin >> n;
    A = new long long[n + 1];
    for (i = 1; i <= n; i++)
        cin >> A[i];
    long long q;
    cin >> q;
    long long x;
    sort(A, A + n + 1);
    while (q--)
    {
        cin >> x;
        cout << binarySearch(A, n, x) << '\n';
    }
    return 0;
}