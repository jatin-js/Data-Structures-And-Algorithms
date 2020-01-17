#include <bits/stdc++.h>
using namespace std;

long long catchThief(char arr[][1001], long long i, long long j, long long n, long long k)
{

    long long j1 = (j - k < 0) ? 0 : j - k;
    for (; j1 < j && arr[i][j1] != 'T'; j1++)
        ;
    if (j1 < j && arr[i][j1] == 'T')
    {
        arr[i][j1] = 'N';
        return 1;
    }

    for (j1 = j + 1; j1 <= j + k && j1 < n && arr[i][j1] != 'T'; j1++)
        ;
    if (j1 < n && j1 <= j + k && arr[i][j1] == 'T')
    {
        arr[i][j1] = 'N';
        return 1;
    }

    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t, q, i, j, k, n;
    char arr[1001][1001];
    cin >> t;
    for (q = 0; q < t; q++)
    {
        cin >> n >> k;
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                cin >> arr[i][j];
        long long count = 0;
        for (i = 0; i < n; i++)
        {

            for (j = 0; j < n; j++)
            {
                if (arr[i][j] == 'P')
                {
                    if (catchThief(arr, i, j, n, k))
                        count++;
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}