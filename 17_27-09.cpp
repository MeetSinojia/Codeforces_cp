// https://codeforces.com/problemset/problem/136/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n, k;
    cin >> n;
    int arr[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> k;
        arr[k] = i;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
#ifndef ONLINE_JUDGE
#endif
    solve();
}