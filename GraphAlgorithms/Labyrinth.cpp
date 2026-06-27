#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

string s[1005];
int vis[1005][1005];
pii parent[1005][1005];
int dir[1005][1005];
char dd[] = {'D', 'U', 'R', 'L'};
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> s[i];

    pii st, en;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (s[i][j] == 'B')
                st = {i, j};
            if (s[i][j] == 'A')
                en = {i, j};
        }
    }

    queue<pii> q;

    q.push(st);
    vis[st.first][st.second] = 1;
    while (!q.empty())
    {
        auto u = q.front();
        q.pop();
        for (int k = 0; k < 4; k++)
        {
            int vx = u.first + dx[k];
            int vy = u.second + dy[k];

            if (vx >= 0 and vy >= 0 and vx < n and vy < m and s[vx][vy] != '#' and vis[vx][vy] == 0)
            {
                parent[vx][vy] = u;
                dir[vx][vy] = k;
                vis[vx][vy] = 1;
                q.push({vx, vy});
            }
        }
    }

    if (vis[en.first][en.second] == 0)
    {
        cout << "NO";
        return 0;
    }
    cout << "YES" << endl;
    int steps = 0;
    // cout<<en.first<<" "<<en.second<<"    "<<st.first<<" "<<st.second<<endl;
    int x = en.first, y = en.second;
    while (x != st.first or y != st.second)
    {
        // cout<<x<<" "<<y<<endl;
        steps++;
        auto v = parent[x][y];
        x = v.first;
        y = v.second;
    }
    cout << steps << endl;
    x = en.first, y = en.second;
    while (x != st.first or y != st.second)
    {
        cout << dd[dir[x][y]];

        auto v = parent[x][y];
        x = v.first;
        y = v.second;
    }
}
