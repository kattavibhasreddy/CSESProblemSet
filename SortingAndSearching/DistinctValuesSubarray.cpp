#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;

    vector<int> ara(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ara[i];
    }

    set<int> s;

    int l = 0, r = 0;
    ll ans = 0;

    while (r < n)
    {
        while (s.find(ara[r]) != s.end())
        {
            s.erase(ara[l]);
            l++;
        }

        s.insert(ara[r]);
        ans += r - l + 1;
        r++;
    }

    cout << ans << "\n";
    return 0;
}