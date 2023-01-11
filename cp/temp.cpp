#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;
        int last = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == last + 1)
                last++;
        }
        cout << (n - last + k - 1) / k << '\n';
    }
}