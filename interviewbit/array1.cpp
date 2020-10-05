/*Example:-   $ g++ -std=c++11 c++Template.cpp*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;

int Solution(vector<int> &v)
{
    sort(v.begin(), v.end());
    auto it = v.begin();
    for (; it != v.end() - 1; it++)
    {
        if (*(it + 1) != *it)
        {
            if (*it == v.end() - it - 1)
                break;
        }
    }

    if (it != v.end() - 1 || v.back() == 0)
        return 1;
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v;

    int n, e, i;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> e;
        v.push_back(e);
    }

    cout << Solution(v);
}