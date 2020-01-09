#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;
int main()
{
    map<char, int> M;           //BST
    unordered_map<char, int> U; //Hashing

    string s = "Jatin Singh";

    //add(key, value) - logN for ordered map, O(1) for unordered map
    //erase(keys) - logN for ordered, O(1) for unordered

    for (char c : s) //O(NlogN) N = |s|
        M[c]++;

    for (char c : s) //O(N)
        U[c]++;

    for (auto c : M)
        cout << c.first << ' ' << c.second << endl;
    cout << endl
         << endl;
    for (auto c : U)
        cout << c.first << ' ' << c.second << endl;
    return 0;
}