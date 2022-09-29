// https://codeforces.com/problemset/problem/1303/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        bool flag = 0;
        string temp;
        cin >> temp;
        int num = 0, ans = 0;
        for (int j = 0; j < temp.size(); j++)
        {
            if (flag == 0 && temp[j] == '1')
            {
                flag = 1;
                continue;
            }
            if (flag == 1 && temp[j] == '1')
            {
                ans += num;
                num = 0;
                continue;
            }
            if (flag == 1)
            {
                num++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}