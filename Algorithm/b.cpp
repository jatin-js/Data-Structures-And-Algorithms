#include <iostream>
using namespace std;

bool Check(int G[5][5], int Y[5], int j)
{
    int c;
    for (int i = 0; i < 5; i++)
    {
        if (Y[i] == j)
        {
            c = 1;
            break;
        }
        if (G[Y[i] - 1][j] == 1 && Y[i] != 0)
        {
            c = 1;
            break;
        }
    }
    if (c == 1)
    {
        return false;
    }
    return true;
}

int includeNeighbour(int G[][5], int vertex, int included[5])
{
    int i;
    for (i = 0; i < 5; i++)
    {
        if (G[vertex - 1][i] == 1)
            included[i] = 1;
    }
}

int *MIS(int G[5][5], int included[5], int X[5], int Y[5], int vertex, int count, int k)
{
    for (int i = 0; i < 5; i++)
    {
        if (G[vertex - 1][i] == 1)
        {
            included[vertex - 1] = 1;
            includeNeighbour(G, vertex, included);

            MIS[g, included, X, Y, ]

                int prevData[5] = {0};
            for (int j = 0; j < 5; j++)
            {
            }
            // for (int j = 0; j < 5; j++)
            // {
            //     if (G[i][j] == 1 && Check(G, Y, j))
            //     {
            //         Y[k] = j;
            //         k++;
            //         MIS(G, X, Y, j, count, k);
            //     }
            // }
            int c = 0;
            for (k = 0; k < 5; k++)
            {
                if (Y[k] != 0)
                {
                    c++;
                }
            }
            if (c > count)
            {
                for (int a = 0; a < 5; a++)
                    X[a] = Y[a];
                count = c;
                Y[0] = X[0];
                for (int a = 1; a < 5; a++)
                {
                    Y[a] = 0;
                }
            }
        }
    }
    return X;
}

int main()
{
    int i, j;
    int *p;
    int X[5] = {0, 0, 0, 0, 0};
    int Y[5] = {0, 0, 0, 0, 0};
    int count = 0;
    int k = 1;
    for (int i = 0; i < 5; i++)
    {
        int vertex = i + 1;
        Y[0] = vertex;
        p = MIS(G, X, Y, vertex, count, k);
        for (int i = 0; i < 5; i++)
        {
            cout << p[i] << ' ';
        }
    }
    for (int i = 0; i < 5; i++)
    {
        // cout << X[i] << "  ";
    }
}