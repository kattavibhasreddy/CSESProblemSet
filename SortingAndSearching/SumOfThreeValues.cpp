#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int N = 2005;
array<ll, 2> a[N];

int main()
{

    int n;
    ll x;
    cin >> n >> x;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i][0];
        a[i][1] = i;
    }

    sort(a, a + n);

    for (int i = 0; i < n; i++)
    {
        ll target = x - a[i][0];

        int j = i + 1, k = n - 1;

        while (j < k)
        {
            ll sum = a[j][0] + a[k][0];

            if (sum == target)
            {
                cout << a[i][1] + 1 << " " << a[j][1] + 1 << " " << a[k][1] + 1;
                return 0;
            }
            else if (sum < target)
            {
                j++;
            }
            else
            {
                k--;
            }
        }
    }

    cout << "IMPOSSIBLE";
    return 0;
}