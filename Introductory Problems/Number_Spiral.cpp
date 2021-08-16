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
    size_t t; \
    cin >> t; \
    while (t--)
#define SIZE 100500000
using namespace std;

void readFile()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
//----------------------------------------------------------------------------------

void generateNumberSpiral(int n)
{
    int a[n+ 1][n+ 1], range;
    string st = to_string(n);
    int l = st.size();
    int padding = l * l - 1;
    for (int r = 1; r <= n; r++)
    {
        for (int c = 1; c <= n; c++)
        {
            if (r == c)
            {
                a[r][c] = r * r - r + 1;
            }
            else if (r > c)
            {
                range = r * r;
                if (r % 2 == 0)
                {
                    a[r][c] = range - c + 1;
                }
                else
                {
                    a[r][c] = range - (r - 1) * 2 + c - 1;
                }
            }
            else
            {
                range = c * c;
                if (c % 2 == 1)
                {
                    a[r][c] = range - r + 1;
                }
                else
                {
                    a[r][c] = range - (c - 1) * 2 + r - 1;
                }
            }
        }
    }
    for (size_t i = 1; i <= n; i++)
    {
        for (size_t j = 1; j <= n; j++)
        {
            cout << setw(padding) << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    //readFile();
    ios();
    tc
    {
        ll r, c, range;
        cin >> r >> c;
        if (r == c)
        {
            cout << r * r - r + 1 << endl;
        }
        else if (r > c)
        {
            range = r * r;
            if (r % 2 == 0)
            {
                cout << range - c + 1 << endl;
            }
            else
            {
                cout << range - (r - 1) * 2 + c - 1 << endl;
            }
        }
        else
        {
            range = c * c;
            if (c % 2 == 1)
            {
                cout << range - r + 1 << endl;
            }
            else
            {
                cout << range - (c - 1) * 2 + r - 1 << endl;
            }
        }
    }
    generateNumberSpiral(10);
    return 0;
}
