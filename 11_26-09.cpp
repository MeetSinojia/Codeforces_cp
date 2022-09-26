// https://codeforces.com/problemset/problem/723/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

// Naive
void solve()
{
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    int a = max(x1, max(x2, x3));
    int b = min(x1, min(x2, x3));
    int d = 1001;
    int temp;
    for (int i = b; i <= a; i++)
    {
        temp = (abs(x1 - i) + abs(x2 - i) + abs(x3 - i));
        d = min(d, temp);
    }
    cout << d;
}

// Optimised
int mas[3];
void solve1()
{
    cin >> mas[0] >> mas[1] >> mas[2];
    sort(mas, mas + 3);
    cout << mas[2] - mas[0];
}

int main()
{
#ifndef ONLINE_JUDGE
#endif

    solve1();
}
