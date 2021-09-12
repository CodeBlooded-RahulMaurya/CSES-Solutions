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
    int n, tsum;
    cin >> n >> tsum;
    multimap<int, int> m;
    int t;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        a.push_back(t);
        m.insert(pair<int, int>(t, i + 1));
    }
    if(n<=3){
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(a[i]+a[j]==tsum){
                    cout<<i+1<<" "<<j+1<<"\n";
                    return 0;
                }
            }
        }
        cout<<"IMPOSSIBLE\n";
        return 0;
    }
    // sort(m.begin(),m.end());
    auto left = m.begin();
    auto right = m.crbegin();
    while (left != (right).base())
    {
        if (left->first + right->first == tsum)
        {
            break;
        }
        else if (left->first + right->first < tsum)
        {
            ++left;
        }
        else
        {
            ++right;
        }
    }
    if (left == (right).base())
        cout << "IMPOSSIBLE";
    else
    {
        cout << left->second << " " << right->second << "\n";
    }
    return 0;
}
