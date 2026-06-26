#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    vector<int> freq(26, 0);
    for (char c : s)
        freq[c - 'A']++;

    int oddCnt = 0, oddIdx = -1;

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] % 2)
        {
            oddCnt++;
            oddIdx = i;
        }
    }

    if (oddCnt > 1)
    {
        cout << "NO SOLUTION";
        return 0;
    }

    string left;

    for (int i = 0; i < 26; i++)
    {
        left += string(freq[i] / 2, char('A' + i));
    }

    string right = left;
    reverse(right.begin(), right.end());

    string mid;
    if (oddIdx != -1)
        mid = string(freq[oddIdx] % 2, char('A' + oddIdx));

    cout << left << mid << right;
}