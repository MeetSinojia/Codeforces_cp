// https://codeforces.com/problemset/problem/1030/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a==1)
        {
            cout<<"HARD";
            return;
        }
    }
    cout<<"EASY";
}

int main()
{
#ifndef ONLINE_JUDGE
#endif
    solve();
}
