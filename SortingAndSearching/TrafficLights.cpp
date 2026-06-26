#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll x, n;
    cin >> x >> n;

    vector<ll> arr;
    arr.push_back(0);
    arr.push_back(x);

    set<ll> s;
    map<ll, ll> mp;

    s.insert(0);
    s.insert(x);
    mp[x] = 1;

    vector<ll> res;

    for (ll i = 0; i < n; i++)
    {
        ll a;
        cin >> a;

        auto it = s.lower_bound(a);
        ll r = *it;
        --it;
        ll l = *it;

        --mp[r - l];
        if (mp[r - l] == 0)
            mp.erase(r - l);

        s.insert(a);

        ++mp[a - l];
        ++mp[r - a];

        res.push_back((--mp.end())->first);
    }

    for (ll i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }

    return 0;
}