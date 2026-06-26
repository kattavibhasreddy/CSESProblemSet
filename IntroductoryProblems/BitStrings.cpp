#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll MOD = 1e9 + 7;

ll power(ll a, ll b)
{
    ll res = 1;
    while (b > 0)
    {
        if (b % 2 == 1)
            res = (res * a) % MOD;

        a = (a * a) % MOD;
        b /= 2;
    }
    return res;
}
int main()
{
    ll n;
    cin >> n;
    ll ans = power(2, n);
    cout << ans;
    return 0;
}