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
    ll a[n];
    ll s1 = 0, s2 = 0, ans = 10e9;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (size_t i = 0; i <= pow(2, n); i++)
    {   s1 = 0,s2=0;
        for(size_t j = 0; j < n; j++)
        {   
            if ((i >> j) & 1)
                s1 += a[j];
            else
                s2 += a[j];
                // deb2(s1,s2);
            // cout << bitset<6>(i) << " "<<(i>>j)<<" "<< ((i>>j)&1)<<endl;
        }

        ans = min(ans, abs(s1 - s2));
    }
    cout << ans << "\n";

    return 0;
}
