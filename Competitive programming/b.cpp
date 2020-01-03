

int getTotalX(vector<int> a, vector<int> b)
{
    int min = INT_MAX, i, j, count = 0;
    for (i = 0; i < b.size(); i++)
    {
        if (b[i] < min)
            min = b[i];
    }
    for (i = min; i >= 2; i--)
    {
        for (j = 0; j < b.size() && !(b[j] % i); j++)
            ;
        if (j == b.size())
            break;
    }
    min = i;

    for (i = 1; i <= min; i++)
    {
        if (!min % i)
        {
            for (j = 0; j < a.size() && !(i % a[j]); j++)
                ;
            if (j == a.size())
                count++;
        }
    }
    cout << count;

    return 0;
}