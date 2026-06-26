#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;

    if (n == 1)
    {
        cout << 1;
    }
    else if (n == 2 || n == 3)
    {
        cout << "NO SOLUTION";
    }
    else
    {
        ll temp = 2;

        while (temp <= n)
        {
            cout << temp << " ";
            temp += 2;
        }

        temp = 1;

        while (temp <= n)
        {
            cout << temp << " ";
            temp += 2;
        }
    }

    return 0;
}