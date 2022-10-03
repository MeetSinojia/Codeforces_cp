// https://codeforces.com/problemset/problem/131/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    string s;
    bool a = true;
    cin >> s;

    for (int i = 1; i < s.length(); i++)
    {
        if (islower(s[i]))
        {
            a = false;
        }
    }

    if (a == true)
    {
        char t;
        for (int j = 0; j < s.length(); j++)
        {
            if (isupper(s[j]))
            {
                t = tolower(s[j]);
            }
            else
            {
                t = toupper(s[j]);
            }
            cout << t;
        }
    }
    else
    {
        cout << s;
    }
}

int main()
{
#ifndef ONLINE_JUDGE
#endif
    solve();
}