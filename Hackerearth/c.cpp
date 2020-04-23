
// Sample code to perform I/O:

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, i, count = 0;
    cin >> n;
    int *arr = new int[n];
    for (i = 0; i < n; i++)
        cin >> arr[i];
    while (i < (1 << n))
    {
        int n = i;
        int c = n - 1;
        int Or = 0, And = 1, Xor = 0;
        while (n)
        {
            if (n & 1 != 0)
            {
                Or |= arr[c];
                And &= arr[c];
                Xor ^= arr[c];
            }
            n >> 1;
            c--;
        }
        if (And == Or == Xor)
            count++;
        i++;
    }
    cout << count;
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail

// Write your code here
