#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll INF = 1e18;
const int N = 1e5 + 5;

vector<pair<int, int>> adj[N];
ll dist[N];

void dijkstra(int src, int n)
{
    for (int i = 0; i < n; i++)
    {
        dist[i] = INF;
    }

    dist[src] = 0;
    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> pq;
    pq.push({0, src});
    while (!pq.empty())
    {
        auto it = pq.top();
        pq.pop();

        ll d = it.first;
        int u = it.second;

        if (d != dist[u])
        {
            continue;
        }

        for (auto it : adj[u])
        {
            int v = it.first;
            int w = it.second;

            if (dist[u] + w < dist[v])
            {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int a, b, w;
        cin >> a >> b >> w;
        a--;
        b--;

        adj[a].push_back({b, w});
    }

    int src = 0;
    dijkstra(src, n);

    for (int i = 0; i < n; i++)
    {
        if (dist[i] == INF)
            cout << -1 << " ";
        else
            cout << dist[i] << " ";
    }

    return 0;
}