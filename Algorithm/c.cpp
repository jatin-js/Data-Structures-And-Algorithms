#include <iostream>
using namespace std;

void prevInclude(int inc[5], int inc2[5])
{
    for (int j = 0; j < 5; j++)
    {
        if (inc[j] != 0)
            inc2[j] = 1;
    }
}

void prevState(int G[][5], int inc[5], int inc2[5], int i)
{
    for (int j = 0; j < 5; j++)
    {
        if (G[i][j] == 1 && inc2[j] == 0)
            inc[j] = 0;
    }
}

void MIS(int G[][5], int inc[], int s, int *maxS, int X[], int Y[])
{
    for (int i = 0; i < 5; i++)
    {

        if (inc[i] != 1)
        {
            int inc2[5] = {0};
            prevInclude(inc, inc2);
            inc[i] = 1;
            Y[i] = 1;
            for (int j = 0; j < 5; j++)
            {
                if (G[i][j] != 0)
                    inc[j] = 1;
            }
            MIS(G, inc, s + 1, maxS, X, Y);

            prevState(G, inc, inc2, i);
            Y[i] = 0;
            MIS(G, inc, s, maxS, X, Y);
            inc[i] = 0;
        }
    }
    if (s > *maxS)
    {
        *maxS = s;
        for (int i = 0; i < 5; i++)
        {
            if (Y[i] == 1)
                X[i] = 1;
            else
                X[i] = 0;
        }
    }
}

int main()
{
    int G[5][5] = {{0, 1, 1, 0, 0}, {1, 0, 0, 1, 0}, {1, 0, 0, 1, 1}, {0, 1, 1, 0, 0}, {0, 0, 1, 0, 0}};

    int inc[5] = {0};
    int maxS = 0;
    int X[5] = {0};
    int Y[5] = {0};
    MIS(G, inc, 0, &maxS, X, Y);
    int i;
    cout << "Maximum Independent Set is : ";
    for (i = 0; i < 5; i++)
        if (X[i] == 1)
            cout << i + 1 << " ";
    return 0;
}