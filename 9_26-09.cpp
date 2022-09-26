// https://codeforces.com/problemset/problem/263/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int m[5][5];
    int c = 0;
    int a, b;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            int temp;
            cin >> temp;
            if (temp == 1)
            {
                a = i;
                b = j;
            }
        }
    }
    c = abs(a - 3) + abs(b - 3);
    cout << c;
}

int main()
{
#ifndef ONLINE_JUDGE
#endif

    solve();
}
