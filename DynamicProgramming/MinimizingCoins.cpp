#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;
const int N = 1e6;

int coins[100];
int dp[N + 1];

int main()
{
    int n, x;
    cin >> n >> x;

    for (int i = 0; i < n; i++)
        cin >> coins[i];

    dp[0] = 0;

    for (int i = 1; i <= x; i++)
    {
        dp[i] = INF;
        for (int j = 0; j < n; j++)
        {
            if (coins[j] <= i && dp[i - coins[j]] != INF)
            {
                dp[i] = min(dp[i], dp[i - coins[j]] + 1);
            }
        }
    }

    if (dp[x] == INF)
        cout << -1;
    else
        cout << dp[x];

    return 0;
}