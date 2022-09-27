// https://codeforces.com/problemset/problem/492/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n;
    cin >> n;
    int c = 0;
    int i = 1;
    while (n > 0)
    {
        int temp = i * (i + 1) / 2;
        if (n >= temp)
        {
            c++;
        }
        n = n - temp;
        i++;
    }

    cout << c;
}

int main()
{
#ifndef ONLINE_JUDGE
#endif
    solve();
}