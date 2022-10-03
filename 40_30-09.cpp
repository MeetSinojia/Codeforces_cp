// https://codeforces.com/contest/139/problem/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n;
    cin >> n;
    int a[n];
    int sum = 0;
    for (int i = 0; i < 7; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    int i = 0;
    int k = a[0];
    while (k < n)
    {
        i++;
        i = i % 7;
        k += a[i];
    }
    cout << i + 1 << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
#endif
    solve();
}