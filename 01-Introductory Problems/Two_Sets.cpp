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
    vector<int> s1, s2;
    ll s = (n) * (n + 1) / 2;
    if (s % 2)
    {
        cout << "NO";
    }
    else
    {
        int j = 0;
        if (n % 4)
        {
            j = 3;
        }
        else
        {
            j = 4;
        }
        for (size_t i = 0; i < (n-1) / 4; i++)
        {
            s1.push_back(4 * i + 1 + j);
            s1.push_back(4 * i + 4 + j);
            s2.push_back(4 * i + 2 + j);
            s2.push_back(4 * i + 3 + j);
        }
        // 0 , 3,
        if (n % 4)
        {
            s1.push_back(1);
            s1.push_back(2);
            s2.push_back(3);
        }
        else
        {
            s1.push_back(1);
            s1.push_back(4);
            s2.push_back(2);
            s2.push_back(3);
        }
        cout << "YES\n";
        cout << s1.size() << "\n";
        for (size_t i = 0; i < s1.size(); i++)
        {
            cout << s1[i] << " ";
        }
        cout << "\n";
        cout << s2.size() << "\n";
        for (size_t i = 0; i < s2.size(); i++)
        {
            cout << s2[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
