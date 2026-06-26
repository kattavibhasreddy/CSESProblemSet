#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1000;
int grid[N][N];
int dx[] = {1, 1, -1, -1, -2, 2, -2, 2};
int dy[] = {-2, 2, -2, 2, 1, 1, -1, -1};

int main()
{
    int n;
    cin >> n;
    queue<pair<int, int>> q;
    q.push({0, 0});
    grid[0][0] = 0;
    while (!q.empty())
    {
        auto &it = q.front();
        q.pop();
        for (int i = 0; i < 8; i++)
        {
            int ndx = it.first + dx[i];
            int ndy = it.second + dy[i];
            if (ndx < 0 or ndy < 0 or ndx >= n or ndy >= n or grid[ndx][ndy])
                continue;
            grid[ndx][ndy] = grid[it.first][it.second] + 1;
            q.push({ndx, ndy});
        }
    }
    grid[0][0] = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << grid[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}