// https://codeforces.com/problemset/problem/1097/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    string s;
    cin >> s;
    string s1, s2, s3, s4, s5;
    cin >> s1 >> s2 >> s3 >> s4 >> s5;

    if (s[1] == s1[1] || s[1] == s2[1] || s[1] == s3[1] || s[1] == s4[1] || s[1] == s5[1])
    {
        cout << "YES";
    }

    else if (s[0] == s1[0] || s[0] == s2[0] || s[0] == s3[0] || s[0] == s4[0] || s[0] == s5[0])
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
