// https://codeforces.com/problemset/problem/1073/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool f = false;
    string ans;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] != s[i + 1])
        {
            f = true;
            ans += s[i];
            ans += s[i + 1];
            break;
        }
    }
    if (f)
    {
        cout << "Yes" << endl;
        cout << ans << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}

int main()
{
#ifndef ONLINE_JUDGE
#endif
    solve();
}
