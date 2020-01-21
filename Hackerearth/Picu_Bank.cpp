// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     long long t, i, j, D, A, M, B, X, a;
//     cin >> t;
//     while (t--)
//     {
//         cin >> D >> A >> M >> B >> X;
//         long long count = 0;

//         // a = (X - D) / A;

//         // if (a > M || (a == M && (X - D) % A != 0))
//         // {
//         //     D += (M * A + B);
//         //     count += (M + 1);
//         // }
//         // else if (a == 0)
//         // {
//         //     D += A;
//         //     count += 1;
//         // }
//         // else
//         // {
//         //     D += (a * A);
//         //     count += a;
//         // }

//         long long n = X / (A * M + B);

//         D += n * (A * M + B);

//         count += n * (M + 1);
//         if (X - D > A * M)
//         {
//             D += (A * M + B);
//             count += (M + 1);
//         }
//         else

//         {
//             count += ceil((long double)(X - D) / A);
//             D += ceil((long double)(X - D) / A) * A;

//             // cout << ceil((float)(X - D) / A);
//             // cout << (float)(X - D) / A;
//         }

//         cout << count << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, i, j;
    cin >> t;
    while (t--)
    {
    }

    
    
    
    return 0;
}