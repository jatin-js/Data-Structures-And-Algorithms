#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool f(int x, int y)
{
    return x > y;
}
int main()
{
    vector<int> A = {11, 2, 3, 14};
    cout << A[1] << endl;

    sort(A.begin(), A.end()); //O(NlogN)

    //2,3,11,14
    //O(logN)
    bool present = binary_search(A.begin(), A.end(), 3); //true
    present = binary_search(A.begin(), A.end(), 4);      //false

    A.push_back(100);
    present = binary_search(A.begin(), A.end(), 100); //true

    //2,3,11,14,100
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    //2,3,11,14,100,100,100,100,100
    A.push_back(123);
    //2,3,11,14,100,100,100,100,100,123

    // vector<int>::iterator it = lower_bound(A.begin(), A.end(), 100);  // >=
    // vector<int>::iterator it2 = upper_bound(A.begin(), A.end(), 100); // >

    //To perform upper_bound, lower_bound, vector should be sorted

    auto it = lower_bound(A.begin(), A.end(), 100);  // >=
    auto it2 = upper_bound(A.begin(), A.end(), 100); // >

    cout << *it << ' ' << *it2 << endl;
    cout << it2 - it << endl; //5 (Count of occurrance of 100)

    sort(A.begin(), A.end(), f); //f->Comparator function, to sort in dec order
    // vector<int>::iterator it3;
    // for (it3 = A.begin(); it3 != A.end(); it3++)
    // {
    //     cout << *it3 << ' ';
    // }

    // for (int x : A)
    // {
    //     //x++; Just change the value of x, no change in vector values
    //     cout << x << ' ';
    // }
    // cout << endl;

    for (int &x : A) //reference, vector values change(increment by 1)
    {
        x++;
    }
    for (int x : A)
    {
        cout << x << ' '; //124,101,101,101,101,101,15,12,4,3
    }
    cout << endl;

    return 0;
}