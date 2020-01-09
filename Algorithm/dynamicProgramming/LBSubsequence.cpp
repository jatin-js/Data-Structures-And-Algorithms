//Longest Bitonic Subsequence (first inc then dec)

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, j;
    int arr[] = {0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int *dpi = new int[n];
    int *dpd = new int[n + 1];

    for (i = 0; i < n; i++)
    {
        dpi[i] = dpd[i] = 1;
    }

    for (i = 1; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (arr[i] > arr[j] && dpi[j] + 1 > dpi[i])
                dpi[i] = dpi[j] + 1;
        }
    }

    for (i = n - 2; i >= 0; i--)
    {
        for (j = n - 1; j > i; j--)
        {
            if (arr[i] > arr[j] && dpd[j] + 1 > dpd[i])
                dpd[i] = dpd[j] + 1;
        }
    }

    int max = INT_MIN;
    for (i = 0; i < n; i++)
    {
        if (max < dpi[i] + dpd[i] - 1)
            max = dpi[i] + dpd[i] - 1;
    }

    cout << max << endl;

    return 0;
}