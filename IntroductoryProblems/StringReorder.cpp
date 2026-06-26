#include "bits/stdc++.h"
using namespace std;
#define ll long long

int main()
{
    string s;
    cin >> s;
    int mpp[26] = {};
    for (char c : s)
    {
        mpp[c - 'A']++;
    }
    char last_added;
    string ans = "";
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (mpp[j] != 0 && i == 0)
            {
                ans += (char)('A' + j);
                last_added = (char)('A' + j);
                mpp[j]--;
            }
            if (mpp[j] != 0 && last_added != (char)('A' + j))
            {
                ans += (char)('A' + j);
                last_added = (char)('A' + j);
                mpp[j]--;
            }
        }
    }
    cout << ans;
    return 0;
}