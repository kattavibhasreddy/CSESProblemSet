#include <bits/stdc++.h>
using namespace std;
#define ll long long

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void dfs(vector<vector<int>> &graph, vector<vector<int>> &visited, int i, int j, int n, int m)
{
    visited[i][j] = 1;
    for (int a = 0; a < 4; a++)
    {
        int ndx = i + dx[a];
        int ndy = j + dy[a];
        if (ndx >= 0 && ndy >= 0 && ndx < n && ndy < m && graph[ndx][ndy] == 0 && visited[ndx][ndy] != 1)
        {
            dfs(graph, visited, ndx, ndy, n, m);
        }
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> graph(n, vector<int>(m, 0));
    char a;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a;
            if (a == '#')
            {
                graph[i][j] = 1;
            }
            else
            {
                graph[i][j] = 0;
            }
        }
    }
    int ans = 0;
    vector<vector<int>> visited(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (visited[i][j] != 1 && graph[i][j] == 0)
            {
                dfs(graph, visited, i, j, n, m);
                ans++;
            }
        }
    }
    cout << ans;
}