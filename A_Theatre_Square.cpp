#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define sortt(v) sort(v.begin(), v.end())
#define sorttd(a) sort(a.begin(), a.end(), greater<int>())
#define fo(i, n) for (i = 0; i < n; i++)
#define pb push_back
#define deb(x) cout << #x << '=' << x << endl
typedef vector<int> vi;
typedef vector<ll> vl;
const int mod = 1'000'000'007;

void solve()
{
    int n, m, a;
    long long x, y, sum;
    cin >> n >> m >> a;
    x = n / a;
    y = m / a;
    if (n % a != 0)
    {
        x = x + 1;
    }
    if (m % a != 0)
    {
        y = y + 1;
    }
    
    sum = x * y;
    cout << sum;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t;
    t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}