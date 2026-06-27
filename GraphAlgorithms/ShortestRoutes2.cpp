#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const ll INF = 1e18;

int main()
{
    int n, m, q;
    cin >> n >> m >> q;

    vector<vector<ll>> dist(n, vector<ll>(n, INF));

    for (int i = 0; i < n; i++)
        dist[i][i] = 0;

    for (int i = 0; i < m; i++)
    {
        int a, b;
        ll c;
        cin >> a >> b >> c;
        a--;
        b--;
        dist[a][b] = min(dist[a][b], c);
        dist[b][a] = min(dist[b][a], c);
    }

    // Floyd–Warshall
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            if (dist[i][k] == INF)
                continue;
            for (int j = 0; j < n; j++)
            {
                if (dist[k][j] == INF)
                    continue;
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }

    while (q--)
    {
        int a, b;
        cin >> a >> b;
        a--;
        b--;

        if (dist[a][b] == INF)
            cout << -1 << "\n";
        else
            cout << dist[a][b] << "\n";
    }

    return 0;
}