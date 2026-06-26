#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    ll ans = 0;
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mx = max(mx, x);
        ans += mx - x;
    }
    cout << ans;
}