#include <iostream>
#include <string.h>
using namespace std;
int minimum(int a, int b);
int palindrome(char *str, int s, int e);
int func(char *str, int s, int e);

int main()
{
    int i, j, l;
    char str[] = "ababb";
    int n = strlen(str);
    cout << func(str, 0, n - 1);
    return 0;
}

int func(char *str, int s, int e)
{
    if (e - s <= 0)
        return 0;
    if (palindrome(str, s, e))
    {
        return 0;
    }
    return 1 + minimum(func(str, s, e - 1), func(str, s + 1, e));
}

int palindrome(char *str, int s, int e)
{
    while (s <= e && str[s] == str[e])
    {
        s++;
        e--;
    }

    if (s >= e)
        return 1;
    return 0;
}

int minimum(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}