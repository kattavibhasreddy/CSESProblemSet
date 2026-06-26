#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> ans(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == 0)
            {
                ans[i][j] = i;
            }
            if (i == n - 1)
            {
                ans[i][j] = i ^ j;
            }
        }
    }

    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = 1; j < n; j++)
        {
            if (i > j)
            {
                ans[i][j] = i ^ j;
            }
            if (i == j)
            {
                ans[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i < j)
            {
                ans[i][j] = i ^ j;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}