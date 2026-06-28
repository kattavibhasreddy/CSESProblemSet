#include <bits/stdc++.h>
using namespace std;

int knapsackTabulation(int W, int weights[], int values[], int n)
{
    vector<int> dp(W + 1, 0);

    for (int i = 0; i < n; i++)
    {
        for (int w = W; w >= weights[i]; w--)
        {
            dp[w] = max(dp[w], values[i] + dp[w - weights[i]]);
        }
    }

    return dp[W];
}

int main()
{
    int n, x;
    int h[1001];
    int s[1001];
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    int ans = knapsackTabulation(x, h, s, n);
    cout << ans;
    return 0;
}
