#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

int main()
{
    int n, m;
    cin >> n >> m;
    multiset<ll, greater<int>> ms;
    ll a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        ms.insert(a);
    }
    ll para[m];
    for (int i = 0; i < m; i++)
    {
        cin >> para[i];
    }
    for (int i = 0; i < m; i++)
    {
        auto it = ms.lower_bound(para[i]);
        if (it == ms.end())
        {
            cout << -1 << endl;
        }
        else
        {
            cout << *it << endl;
            ms.erase(it);
        }
    }
}