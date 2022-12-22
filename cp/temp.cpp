#include <iostream>
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main()
{
    int t, k, n, d = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> k >> n;
        int arr[k];
        int x = d;
        for (int j = 0; j < k; j++)
        {
            if (x <= n)
            {
                arr[j] = x;
                x = x + d;
                d++;
            }
            else
            {
                int a = k - j;
                x = arr[j - 1];
                d = 1;
                int y = n - x;
                if (y >= a)
                {
                    x = x + d;
                    arr[j] = x;
                }
                else
                {
                    arr[j - 1] = arr[j - 2] + d;
                    arr[j] = arr[j - 1] + d;
                    x = arr[j] + d;
                }
            }
        }
        for (int j = 0; j < k; j++)
            cout << arr[j] << " ";
        cout << endl;
        d = 1;
        x = d;
    }
    return 0;
}
