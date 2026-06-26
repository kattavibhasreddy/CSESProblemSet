#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;

    ll ans = 0;

    while (n > 0)
    {
        n /= 5;
        ans += n;
    }

    cout << ans;

    return 0;
}