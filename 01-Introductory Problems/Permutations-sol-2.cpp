/*
 ____  _       _            ____              _ 
|  _ \(_)_   _(_)_ __   ___/ ___|  ___  _   _| |
| | | | \ \ / / | '_ \ / _ \___ \ / _ \| | | | |
| |_| | |\ V /| | | | |  __/___) | (_) | |_| | |
|____/|_| \_/ |_|_| |_|\___|____/ \___/ \__,_|_|                                      
                                                  
*/
#include <bits/stdc++.h>
#define ll long long
#define deb1(x) cout << #x << " " << x << "\n";
#define deb2(x, y) cout << #x << " " << x << " " << #y << " " << y << "\n";
#define deb3(x, y, z) cout << #x << " " << x << " " << #y << " " << y << " " << #z << " " << z << "\n";
#define ios()                \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)
using namespace std;

void readFile()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
//----------------------------------------------------------------------------------
int main()
{
    //readFile();
    ios();
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << "1";
    }
    else if (n < 4)
        cout << "NO SOLUTION";
    else if (n == 4)
    {
        cout << "3 1 4 2";
    }
    else
    {
        int mid = (n + 1) / 2;
        int a[n];
        for (size_t i = 1, j = 0; i <= mid; i++)
        {
            // deb2(i,j);
            a[j] = i;
            j += 2;
        }
        for (size_t i = mid + 1, j = 1; i <= n && j <= n; i++)
        {
            a[j] = i;
            j += 2;
        }
        for (size_t i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
    }
    return 0;
}
