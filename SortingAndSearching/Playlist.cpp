#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    set<int> s;

    int l = 0, ans = 0;

    for (int r = 0; r < n; r++) {
        while (s.count(arr[r])) {
            s.erase(arr[l]);
            l++;
        }

        s.insert(arr[r]);
        ans = max(ans, r - l + 1);
    }

    cout << ans;
}