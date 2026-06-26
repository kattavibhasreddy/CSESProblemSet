#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    int n;
    cin >> n;
    int ara[n];
    for (int i = 0; i < n; i++)
        cin >> ara[i];
    sort(ara, ara + n);
    ll res = 1;
    for (int i = 0; i < n; i++)
    {
        if (ara[i] <= res)
        {
            res += ara[i];
        }
        else
            break;
    }
    cout << res << endl;
}