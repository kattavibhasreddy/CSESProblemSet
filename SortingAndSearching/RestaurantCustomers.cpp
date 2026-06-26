#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;

    vector<ll> start(n), endt(n);

    for (int i = 0; i < n; i++)
    {
        cin >> start[i] >> endt[i];
    }

    sort(start.begin(), start.end());
    sort(endt.begin(), endt.end());

    ll ans = 0;
    ll cur = 0;
    int i = 0, j = 0;

    while (i < n && j < n)
    {
        if (start[i] < endt[j])
        {
            cur++;
            ans = max(ans, cur);
            i++;
        }
        else
        {
            cur--;
            j++;
        }
    }

    cout << ans;
}