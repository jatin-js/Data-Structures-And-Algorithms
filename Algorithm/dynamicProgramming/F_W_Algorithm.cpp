//Floyd Warshall Algorithm

#include <bits/stdc++.h>
#define I INT16_MAX
using namespace std;
int main()
{
    int t, i, j, k;
    int V = 4;
    int graph[V][V] = {{0, 5, I, 10},
                       {I, 0, 3, I},
                       {I, I, 0, 1},
                       {I, I, I, 0}};
    int dist[V][V];

    for (i = 0; i < V; i++)
    {
        for (j = 0; j < V; j++)
        {
            dist[i][j] = graph[i][j];
        }
    }

    for (i = 0; i < V; i++)
    {
        for (j = 0; j < V; j++)
        {
            for (k = 0; k < V; k++)
            {
                if (i != j)
                    if (dist[i][k] + dist[k][j] < dist[i][j])
                        dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }

    for (i = 0; i < V; i++)
    {
        for (j = 0; j < V; j++)
        {
            if (dist[i][j] == I)
                cout << "I ";
            else
                cout << dist[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}