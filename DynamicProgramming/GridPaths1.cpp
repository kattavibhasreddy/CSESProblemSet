#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int MOD = 1e9 + 7;
const int N = 1000;

ll dp[N][N];

int main()
{
    int n;
    cin >> n;

    string s[N];

    for (int i = 0; i < n; i++)
        cin >> s[i];

    if (s[0][0] == '*')
    {
        cout << 0;
        return 0;
    }

    dp[0][0] = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (s[i][j] == '*')
            {
                dp[i][j] = 0;
                continue;
            }

            if (i > 0)
                dp[i][j] = (dp[i][j] + dp[i - 1][j]) % MOD;

            if (j > 0)
                dp[i][j] = (dp[i][j] + dp[i][j - 1]) % MOD;
        }
    }

    cout << dp[n - 1][n - 1];
}