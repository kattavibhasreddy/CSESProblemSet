#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;

        if (a == 0 && b == 0)
        {
            cout << "YES\n";

            for (int i = 1; i <= n; i++)
                cout << i << ' ';
            cout << '\n';

            for (int i = 1; i <= n; i++)
                cout << i << ' ';
            cout << '\n';

            continue;
        }

        if (a == 0 || b == 0 || a + b > n)
        {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";

        for (int i = 1; i <= n; i++)
            cout << i << ' ';
        cout << '\n';

        int offset = n - a - b;

        for (int i = 1; i <= offset; i++)
            cout << i << ' ';

        for (int i = offset + a + 1; i <= n; i++)
            cout << i << ' ';

        for (int i = offset + 1; i <= offset + a; i++)
            cout << i << ' ';

        cout << '\n';
    }

    return 0;
}