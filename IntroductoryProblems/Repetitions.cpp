#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int ans = 0, c = 0;
    char l = '\0';

    for (char d : s)
    {
        if (d == l)
        {
            ++c;
        }
        else
        {
            l = d;
            c = 1;
        }

        ans = max(ans, c);
    }

    cout << ans;
}