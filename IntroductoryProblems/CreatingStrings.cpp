#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    vector<string> ans;
    do
    {
        ans.push_back(s);
    } while (next_permutation(s.begin(), s.end()));
    cout << ans.size() << "\n";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << "\n";
    }
}