//[x,y]
//  add[2, 3]
// add[10, 20]
// add[30, 400]
// add[401, 450]
// give me the interval 401
#include <iostream>
#include <set>
#include <limits.h>
using namespace std;
int main()
{

    // if a<c => {a,b} is smaller than {c,d}. If a==c then comparison between b and d occur

    set<pair<int, int>> S;

    S.insert({401, 450});       //logN
    S.insert({10, 20});
    S.insert({2, 3});
    S.insert({30, 400});

    //{2,3}
    //{10, 20}
    //{30, 400}
    //{401, 450}

    int point = 450;

    auto it = S.upper_bound({point, INT_MAX}); //Using INT_MAX because if suppose point value matches with pair first value, then it compare pair second value with INT_MAX which is greater, so we get next pair.If we put a value other than INT_MAX, it may become smaller than pair second value, then we get iterator to same pair, but we want iterator to next pair.

    if (it == S.begin())
    {
        cout << "Given point not lying in any interval\n";
        return 0;
    }

    it--;
    pair<int, int> current = *it;
    if (current.first <= point && current.second >= point)
    {
        cout << "present: " << current.first << ' ' << current.second << endl;
    }
    else
        cout << "Given point not lying in any interval";

    return 0;
}
