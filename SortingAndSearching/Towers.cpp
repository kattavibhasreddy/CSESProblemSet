#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    int a;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        int p = upper_bound(v.begin(), v.end(), a) - v.begin();
        if (p < v.size())
        {
            v[p] = a;
        }
        else
        {
            v.push_back(a);
        }
    }
    cout << v.size();
    return 0;
}