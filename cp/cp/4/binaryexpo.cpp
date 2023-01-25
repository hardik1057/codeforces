/* ! Copy from here ! */
#include <bits/stdc++.h>
using namespace std;
/* ! #define(s) ! */
#define ll long long
ll binaryexpo(ll base, ll expo)
{
    ll ans=1;
    if (expo ==0)
    {
        ans = 1;
    }
    else if (expo == 1)
    {
        ans = base;
    }
    else
    {
        while (expo > 0)
        {
            if (expo & 1)
            {
                ans = ans * base;
                expo--;
            }
            else
            {
                base = base * base;
                expo = expo / 2;
            }
        }
    }
    return ans;
}
void solve()
{
    ll base, expo,ans;
    cin >> base >> expo;
    ans=binaryexpo(base,expo);
    cout<<ans;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int T = 1; // multiple test cases
    // cin >> T;
    while (T--)
    {
        solve();
        if (T)
            cout << "\n";
    }
    return 0;
}