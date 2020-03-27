#include <iostream>
#include <set>
using namespace std;
int main()
{

    set<int> S;  //Sorted
    S.insert(1); //O(logN)  BST(Just like map with just values)
    S.insert(2);
    S.insert(-1);
    S.insert(-10);

    S.erase(1); //O(logN)

    for (int x : S)
    {
        cout << x << ' ';
    }
    cout << endl;

    //-10,-1,1,2
    auto it = S.find(-1);
    if (it == S.end())
    {
        cout << "not present\n";
    }
    else
    {
        cout << "present\n";
        cout << *it << endl;
    }

    // auto it2 = S.lower_bound(-1); //-1
    // auto it3 = S.upper_bound(-1); //1

    // auto it4 = S.upper_bound(0); //1
    // cout << *it2 << ' ' << *it3 << ' ' << *it4 << endl;

    auto it4 = S.upper_bound(2);
    if (it4 == S.end())
    {
        cout << "oops! sorry cant find something like this\n";
    }
    return 0;
}