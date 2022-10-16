#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    string p, h;
    cin >> p >> h;
    int n1 = p.size();
    int n2 = h.size();
    if (n2 < n1)
    {
        cout << "NO";
        return;
    }

    int f = 0;
    sort(p.begin(), p.end());
    for (int i = 0; i <= (n2 - n1); i++)
    {
        string s1 = h.substr(i, n1);
        // cout<<s1<<" ";
        sort(s1.begin(), s1.end());
        if (s1 == p)
        {
            f = 1;
            break;
        }
    }
    if (f == 1)
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
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
}
