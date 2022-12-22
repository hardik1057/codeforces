#define haha
/* ! Copy from here ! */
#include <bits/stdc++.h>
using namespace std;
/* ! #define(s) ! */
void solve()
{
    int n,k,cnt=1;
    cin>>n>>k;
    int arr[n];
    arr[n]=k;
    if(n==k)
    {
        for (int i = 0; i < k; i++)
        {
            arr[i] = cnt;
            cnt++;
        }
    }
    else
    {
        
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
#ifdef haha
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int T = 0;// multiple test cases
    cin >> T;
    while (T--)
    {
        solve();
        if (T)
            cout << "\n";
    }
    return 0;
}