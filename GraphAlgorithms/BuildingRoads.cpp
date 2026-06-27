#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 5;
vector<int> adj[N];
int visited[N];

void dfs(int u)
{
    visited[u] = 1;
    for (auto v : adj[u])
    {
        if (visited[v] == 0)
            dfs(v);
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> res;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            ans++;
            res.push_back(i);
            dfs(i);
        }
    }

    cout << ans - 1 << "\n";
    for (int i = 0; i < res.size() - 1; i++)
    {
        cout << res[i] + 1 << " " << res[i + 1] + 1 << "\n";
    }
    return 0;
}