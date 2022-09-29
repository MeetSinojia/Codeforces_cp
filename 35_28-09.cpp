// https://codeforces.com/problemset/problem/118/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    ll n = s.size();
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')
        {
            continue;
        }

        else
        {
            cout << '.';
            cout << s[i];
        }
    }
}

int main()
{
#ifndef ONLINE_JUDGE
#endif
    solve();
}
