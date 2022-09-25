// https://codeforces.com/problemset/problem/734/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ca = 0, cd = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            ca++;
        }

        else
        {
            cd++;
        }
    }

    if (ca == cd)
    {
        cout << "Friendship";
    }
    else if (ca > cd)
    {
        cout << "Anton";
    }
    else
    {
        cout << "Danik";
    }
}

int main()
{
#ifndef ONLINE_JUDGE
#endif
    solve();
}