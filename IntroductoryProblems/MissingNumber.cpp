#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;

    ll xr = 0;

    for (ll i = 1; i <= n; i++)
        xr ^= i;

    for (ll i = 1; i < n; i++)
    {
        ll num;
        cin >> num;
        xr ^= num;
    }

    cout << xr;
}