#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    pair<ll, ll> arr[n];
    int a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        arr[i] = {a, i};
    }
    sort(arr, arr + n);
    int ans = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i].second > arr[i + 1].second)
        {
            ans++;
        }
    }
    cout << ans;
    return 0;
}