// https://codeforces.com/problemset/problem/110/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    string s;
    cin >> s;
    int c = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '4' || s[i] == '7')
        {
            c++;
        }
    }
    if(c==0)
    {
        cout<<"NO";
        return;
    }
    int r;
    int t = 0;
    while (c != 0)
    {
        r = c % 10;

        if (r != 4 && r != 7)
        {
            t = 1;
        }
        c = c / 10;
    }

    if (t == 0)
    {
        cout << "YES";
    }

    else
    {
        cout << "NO";
    }
}

int main()
{
#ifndef ONLINE_JUDGE
#endif
    solve();
}
