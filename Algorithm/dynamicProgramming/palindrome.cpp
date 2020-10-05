#include <iostream>
using namespace std;

void LongestPalindromicSubStringDP(string str)
{
    int n = str.length();
    bool t[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            t[i][j] = false;
        }
    }

    for (int i = 0; i < n; i++)
    {
        t[i][i] = true;
    }
    // int maxDiff = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (str[i] == str[i + 1])
        {
            t[i][i + 1] = true;
            // maxDiff = 2;
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 2; j < n; j++)
    //     {
    //         cout << (i + 1) << " " << (j - 1) << " " << t[i + 1][j - 1] << " ";
    //         //System.out.print((i+1)+ " "+(j-1)+" "+t[i+1][j-1]+", ");
    //         cout << str[i] << " " << str[j] << endl;
    //         //System.out.println(str.charAt(i)+", "+str.charAt(j));
    //         if (t[i + 1][j - 1] == true && str[i] == str[j])
    //         {
    //             t[i][j] = true;
    //         }
    //     }
    // }
    // cout << "t[2][4] " << t[2][4] << endl
    //      << endl;

    int i, j;
    for (i = 2; i < n; i++)
    {
        for (j = 0; j + i < n; j++)
        {
            if (str[j] == str[j + i] && t[j + 1][j + i - 1] == true)
                t[j][j + i] = true;
            else
                t[j][j + i] = false;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << t[i][j] << "\t";
        }
        cout << "\n";
    }
}
int main()
{
    string str = "eabcba";

    LongestPalindromicSubStringDP(str);
    return 0;
}
