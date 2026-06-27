#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 5;

vector<int> adj[N];
int vis[N];

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    queue<pair<int, int>> q;

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            vis[i] = 1;
            q.push({i, 1});

            while (!q.empty())
            {
                pair<int, int> u = q.front();
                q.pop();

                for (int v : adj[u.first])
                {
                    if (!vis[v])
                    {
                        vis[v] = (u.second == 1 ? 2 : 1);
                        q.push({v, vis[v]});
                    }
                    else if (vis[v] == u.second)
                    {
                        cout << "IMPOSSIBLE";
                        return 0;
                    }
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
        cout << vis[i] << " ";

    return 0;
}