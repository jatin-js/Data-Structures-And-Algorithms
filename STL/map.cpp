#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, int> A;
    A[1] = 100; //logN
    A[2] = -1;
    A[3] = 200;
    A[100000222] = 1;

    map<char, int> cnt;
    string x = "Jatin Singh";
    for (char c : x)
    {
        cnt[c]++;
    }

    // cout << cnt['a'] << ' ' << cnt['i'] << ' ' << endl; //logN
    //find, delete, erase
    // auto it = cnt.find('i');
    // cout << it->first;

    // cnt.erase('i');

    // for (auto i = cnt.begin(); i != cnt.end(); i++)
    // {
    //     cout << i->first << ' ' << i->second << endl;
    // }

    return 0;
}