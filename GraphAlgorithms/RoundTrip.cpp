#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 5;

vector<int> adj[N];
int visited[N];
int parent[N];
vector<int> ans;

bool dfs(int u, int par)
{
    visited[u] = 1;
    parent[u] = par;

    for (int v : adj[u])
    {
        if (v == par)
            continue;

        if (!visited[v])
        {
            if (dfs(v, u))
                return true;
        }
        else
        {
            // Found a cycle
            ans.push_back(v);
            int cur = u;
            while (cur != v)
            {
                ans.push_back(cur);
                cur = parent[cur];
            }
            ans.push_back(v);
            return true;
        }
    }

    return false;
}

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    memset(visited, 0, sizeof(visited));

    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            if (dfs(i, -1))
            {
                reverse(ans.begin(), ans.end());
                cout << ans.size() << "\n";
                for (int x : ans)
                    cout << x + 1 << " ";
                return 0;
            }
        }
    }

    cout << "IMPOSSIBLE";
    return 0;
}