#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;

    ll sum = n * (n + 1) / 2;

    if (sum % 2)
    {
        cout << "NO\n";
        return 0;
    }

    cout << "YES\n";

    ll target = sum / 2;
    vector<ll> set1, set2;

    for (ll i = n; i >= 1; i--)
    {
        if (i <= target)
        {
            set1.push_back(i);
            target -= i;
        }
        else
        {
            set2.push_back(i);
        }
    }

    cout << set1.size() << "\n";
    for (ll x : set1)
        cout << x << " ";
    cout << "\n";

    cout << set2.size() << "\n";
    for (ll x : set2)
        cout << x << " ";
    cout << "\n";

    return 0;
}