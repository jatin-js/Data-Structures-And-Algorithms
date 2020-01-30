#include <bits/stdc++.h>
using namespace std;
// int scan(){
// 	register int c = getchar_unlocked();
//     int n = 0;
//     for( ; (c<48 || c>57); c = getchar_unlocked() );
//     for( ; (c>47 && c<58); c = getchar_unlocked() ){
//         n = (n<<1) + (n<<3) +c -48;
//     }
//     return n;
// }
//  void scan1(){
// 	register int c = getchar_unlocked();
//     for( ; (c<48 || c>57); c = getchar_unlocked() );
//     for( ; (c>47 && c<58); c = getchar_unlocked() );
// }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int32_t n, q, *arr, i, l, r, no;
    cin >> n >> q;
    string arr;
    for (i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    while (q--)
    {
        cin >> no;
        if (no == 0)
        {
            cin >> l >> r;
            if (arr[r] == 1)
                cout << "ODD" << endl;
            else
                cout << "EVEN" << endl;
        }
        else
        {
            cin >> l;
            arr[l] = !(arr[l]);
        }
    }
    return 0;
}