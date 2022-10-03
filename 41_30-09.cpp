#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int k, count = 0;
    cin >> k;
    string s;
    cin >> s;
    int n = s.size();
    sort(s.begin(), s.begin() + s.size());
    char ch;
    for (int i = 0; i < s.size(); i++)
    {
        if (i % k == 0)
        {
            ch = s[i];
        }
        if (s[i] == ch)
        {
            count++;
        }
    }
    if (n == count && count % k == 0)
    {
        for (int i = 0; i < k; i++)
        {
            for (int n = 0; n < s.size(); n += k)
            {
                cout << s[n];
            }
        }
    }
    else
    {
        cout << "-1";
    }
}

int main()
{
#ifndef ONLINE_JUDGE
#endif
    solve();
}