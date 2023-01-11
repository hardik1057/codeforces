/* ! Copy from here ! */
#include <bits/stdc++.h>
using namespace std;
/* ! #define(s) ! */
void solve()
{
    long long int n,ans,fin,a,b,c;
    long long m=1000000007;
    cin>>n;
    // ans=((n*(n+1)*((4*n)-1)))/6;
    // fin=(2022*ans)%(1000000007);
    // cout<<(long long)(fin);
    a=((n*(n+1)*((2*n)+1))/3); 
    b=((n*(n+1))/2);
    c=(((a%m)-(b%m))*2022)%m;
    cout<<c;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int T = 1;// multiple test cases
    cin >> T;
    while (T--)
    {
        solve();
        if (T)
            cout << "\n";
    }
    return 0;
}