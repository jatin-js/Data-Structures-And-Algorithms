#include <iostream>
using namespace std;
int main()
{
    int amt, totalCoins = 0;
    int coin[4] = {50, 20, 5, 4}, res[4] = {0};
    cin >> amt;
    int i = 0;
    while (amt && i < 4)
    {
        res[i] = amt / coin[i];
        totalCoins += res[i];
        amt %= coin[i];
        i++;
    }
    cout << totalCoins << '\n';
    for (int i = 0; i < 4; i++)
        cout << res[i] << ' ';
    // cout << endl;
}