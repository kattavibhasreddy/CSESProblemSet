#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, p[20];

int main() {
    cin >> n;

    ll s = 0, ans = 0;

    for (int i = 0; i < n; ++i) {
        cin >> p[i];
        s += p[i];
    }

    for (int mask = 0; mask < (1 << n); ++mask) {
        ll cs = 0;

        for (int j = 0; j < n; ++j) {
            if (mask & (1 << j))
                cs += p[j];
        }

        if (cs <= s / 2)
            ans = max(ans, cs);
    }

    cout << s - 2 * ans;
}