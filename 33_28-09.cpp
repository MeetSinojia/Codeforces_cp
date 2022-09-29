// https://codeforces.com/problemset/problem/1095/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int i = 0;
    int j = 1;
    while (i < n)
    {
        cout << s[i];
        i = i + j;
        j++;
    }
}

int main()
{
#ifndef ONLINE_JUDGE
#endif
    solve();
}