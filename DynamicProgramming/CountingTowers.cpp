#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int M = 1e9 + 7;
const int N = 1e6 + 5;


ll broken[N], solid[N];
int main()
{
    broken[1] = solid[1] = 1;
    for (int i = 2; i < N; i++)
    {
        solid[i] = solid[i - 1] * 2 + broken[i - 1];
        broken[i] = solid[i - 1] + 4 * broken[i - 1];
        solid[i] %= M;
        broken[i] %= M;
    }
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        cout << (solid[n] + broken[n]) % M << endl;
    }
}