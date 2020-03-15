#include <bits/stdc++.h>
using namespace std;

int findMax(int arr[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int search(int arr[], int n, int key)
{
    int i;
    for (i = 0; i < n && arr[i] != key; i++)
        ;

    if (i == n)
        return 0;
    else
        return 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i, n, m, *A, *C;
    cin >> n;
    A = new int[n];
    C = new int[m];
    for (i = 0; i < n; i++)
        cin >> A[i];

    cin >> m;
    for (i = 0; i < m; i++)
        cin >> C[i];
    sort(C, C + m);

    int min = C[0] - A[0];
    int max = C[m - 1] - A[n - 1];
    int j;
    for (i = min; i <= max; i++)
    {
        for (j = 0; j < n && binary_search(C, C + m, i + A[j]); j++)
            ;
        if (j == n)
            cout << i << ' ';
    }
    return 0;
}