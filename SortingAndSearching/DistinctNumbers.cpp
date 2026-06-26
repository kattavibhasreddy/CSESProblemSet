#include "bits/stdc++.h"
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;
    set<int> s;
    ll temp;
    for (ll i = 0; i < n; i++)
    {
        cin >> temp;
        s.insert(temp);
    }
    cout << s.size();
}