#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, x;
    cin >> n >> x;
    vector<int> w;
    ll temp;
    for (ll i = 0; i < n; i++)
    {
        cin >> temp;
        w.push_back(temp);
    }
    sort(w.begin(), w.end());
    int i = 0, j = n - 1, res = 0;
    while (i <= j)
    {
        if (i == j)
        {
            i++;
            res++;
        }
        else if (w[i] + w[j] <= x)
        {
            i++;
            j--;
            res++;
        }
        else
        {
            j--;
            res++;
        }
    }
    cout << res;
}