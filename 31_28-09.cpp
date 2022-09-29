// https://codeforces.com/problemset/problem/1433/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    string s;
    cin >> s;
    int cnt = 0;
    int c = int(s[0]) - 1;
    int t = c - 48;
    int n = s.size();
    while (t--)
    {
        cnt += 10;
    }
    cnt += n * (n + 1) / 2;
    cout << cnt;
}

int main()
{
#ifndef ONLINE_JUDGE
#endif
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
}