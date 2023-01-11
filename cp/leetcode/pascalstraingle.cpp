/* ! Copy from here ! */
#include <bits/stdc++.h>
using namespace std;
/* ! #define(s) ! */
#define ll long long
void solve()
{
    int n,i,j,c;
    cin>>n;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if (i == 0 || j == 0)
                c = 1;
            else
                c = c * (i - j + 1) / j;
            cout<<c<<"  ";
        }
        cout<<endl;
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int T = 1;// multiple test cases
    //cin >> T;
    while (T--)
    {
        solve();
        if (T)
            cout << "\n";
    }
    return 0;
}