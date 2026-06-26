#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    ll x;
    cin >> n >> x;

    map<ll, int> mpp;

    for (int i = 0; i < n; i++)
    {
        ll a;
        cin >> a;

        ll complement = x - a;

        if (mpp.find(complement) != mpp.end())
        {
            cout << mpp[complement] + 1 << " " << i + 1;
            return 0;
        }

        mpp[a] = i;
    }

    cout << "IMPOSSIBLE";
}