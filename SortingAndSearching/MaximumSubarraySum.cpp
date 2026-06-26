#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll curSum = 0;
    ll maxSum = 0;
    for (int i = 0; i < n; i++)
    {
        curSum += arr[i];
        if (curSum < 0)
        {
            curSum = 0;
            continue;
        }
        maxSum = max(maxSum, curSum);
    }
    if (curSum == 0)
    {
        ll max = *max_element(arr, arr + n);
        cout << max;
        return 0;
    }
    cout << maxSum;
    return 0;
}