#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    ll squares, total_ways;

    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            cout << '0' << "\n";
            continue;
        }
        squares = i * i;
        total_ways = squares * (squares - 1) / 2;
        if (i > 2)
        {
            total_ways -= 4 * (i - 1) * (i - 2);
        }
        cout << total_ways << "\n";
    }
    return 0;
}