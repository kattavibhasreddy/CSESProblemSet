#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int n;
    cin >> n;

    vector<ll> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    ll median = arr[n / 2];
    ll ans = 0;

    for (ll x : arr)
        ans += abs(x - median);

    cout << ans;
}