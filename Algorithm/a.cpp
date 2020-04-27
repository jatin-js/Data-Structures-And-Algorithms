#include <iostream>
using namespace std;

void lmis(int mat[][7], int weight[], int d[], int sum, int &max, int intans[], int ans[])
{
    int i, j, imax = INT_MIN;
    for (i = 1; i <= 6; i++)
    {

        if (d[i] == 0)
        {
            int d2[7] = {0};
            for (j = 1; j <= 6; j++)
            {
                if (d[j] == 1)
                    d2[j] = 1;
            }
            d[i] = 1;
            intans[i] = 1;
            for (j = 1; j <= 6; j++)
            {
                if (mat[i][j] == 1)
                    d[j] = 1;
            }
            lmis(mat, weight, d, sum + weight[i], max, intans, ans);

            for (j = 1; j <= 6; j++)
            {
                if (mat[i][j] == 1 && d2[j] == 0)
                    d[j] = 0;
            }
            intans[i] = 0;
            lmis(mat, weight, d, sum, max, intans, ans);
            d[i] = 0;
        }
    }
    if (sum > max)
    {
        max = sum;
        for (i = 1; i <= 6; i++)
        {
            if (intans[i] == 1)
                ans[i] = 1;
            else
                ans[i] = 0;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int mat[7][7] = {{0, 0, 0, 0, 0, 0, 0},
                     {0, 0, 1, 1, 0, 0, 0},
                     {0, 1, 0, 0, 1, 1, 0},
                     {0, 1, 0, 0, 1, 0, 0},
                     {0, 0, 1, 1, 0, 1, 1},
                     {0, 0, 1, 0, 1, 0, 1},
                     {0, 0, 0, 0, 1, 1, 0}};

    int weight[7] = {0,
                     1,
                     2,
                     3,
                     4,
                     5,
                     6};
    int d[7] = {0};
    int max = 0;
    int ans[7] = {0};
    int intans[7] = {0};
    lmis(mat, weight, d, 0, max, intans, ans);
    cout << max << '\n';
    int i;
    for (i = 1; i <= 6; i++)
        if (ans[i] == 1)
            cout << i << " ";
}