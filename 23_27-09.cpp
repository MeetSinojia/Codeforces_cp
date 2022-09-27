// https://codeforces.com/problemset/problem/236/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    string s;
    cin >> s;
    unordered_map<char, int> m;
    for (auto t : s)
    {
        m[t]++;
    }
    int x = m.size();
    if (x % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }

    else
    {
        cout << "IGNORE HIM!";
    }
}

int main()
{
#ifndef ONLINE_JUDGE
#endif
    solve();
}
