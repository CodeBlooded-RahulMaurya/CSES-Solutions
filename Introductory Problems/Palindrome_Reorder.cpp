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
    string st, left, right;
    cin >> st;
    int ch[26] = {0};
    for (auto i : st)
    {
        ch[i - 'A'] += 1;
        // deb1(ch[i-'A']);
    }

    for (size_t i = 0; i < 26; i++)
    {
        if (ch[i] > 1)
        {
            int freq = ch[i];
            freq = freq - freq % 2;
            ch[i] -= freq;
            for (int j = 1; j <= freq / 2; j++)
            {
                left += char(i + 'A');
                right += char(i + 'A');
            }
        }
        // deb3(left, right, ch[i]);
    }
    int ones = 0;
    for (auto i : ch)
    {
        if (i >= 1)
        {
            ones += 1;
        }
    }
    // cout<<ones<<endl;
    if (ones > 1)
    {
        cout << "NO SOLUTION";
    }
    else
    {
        if (ones == 1)
        {
            for (size_t i = 0; i < 26; i++)
            {
                if (ch[i] == 1)
                {
                    reverse(right.begin(), right.end());
                    cout << left + char(i + 'A') + right;
                    return 0;
                }
            }
        }
        else
        {
            reverse(right.begin(), right.end());
            cout << left + right;
        }
    }
    return 0;
}
