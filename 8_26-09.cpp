// https://codeforces.com/contest/514/problem/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

#include <iostream>
#include <cstring>
using namespace std;

int changeDigit(char t)
{
    int temp = t - 48;
    return '9' - temp;
}

void solve()
{
    char x[20], y;
    cin >> x;
    for (int i = 0; i < strlen(x); i++)
    {
        if (i == 0)
        {
            if (x[i] == '9')
            {
                continue;
            }
        }
        y = changeDigit(x[i]);
        x[i] = min(x[i], y);
    }
    cout << x;
}

int main()
{
#ifndef ONLINE_JUDGE
#endif

    solve();
}