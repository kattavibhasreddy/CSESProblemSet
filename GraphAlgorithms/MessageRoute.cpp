#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 5;

vector<int> adj[N];
int vis[N];
int parent[N];
int main()
{
    int n, m;
    cin >> n >> m;
    memset(parent, -1, sizeof(parent));
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int start = 0;
    int end = n - 1;
    vector<int> res;
    queue<int> q;
    int ans = 0;
    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, 1, -1};
    q.push(0);
    vis[0] = 1;
    res.push_back(1);
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (auto v : adj[u])
        {
            if (!vis[v])
            {
                vis[v] = 1;
                parent[v] = u;
                q.push(v);
            }
        }
    }
    if (!vis[end])
    {
        cout << "IMPOSSIBLE";
        return 0;
    }

    vector<int> path;

    for (int v = end; v != -1; v = parent[v])
        path.push_back(v + 1);

    reverse(path.begin(), path.end());

    cout << path.size() << "\n";

    for (int x : path)
        cout << x << " ";
    return 0;
}
