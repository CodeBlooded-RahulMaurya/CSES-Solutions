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
bool sortbysec(const pair<int, int> &a,
               const pair<int, int> &b)
{
    return (a.second < b.second);
}
//----------------------------------------------------------------------------------
int main()
{
    //readFile();
    ios();
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    int st, en;
    for (int i = 0; i < n; i++)
    {
        cin >> st >> en;
        v.push_back(make_pair(st, en));
    }

    sort(v.begin(), v.end(), sortbysec);
    int end = v[0].second, ans = 1;

    for (int i = 1; i < n; i++)
    {
        if(v[i].first>=end){
            ans += 1;
            end = v[i].second;
        }
    }
    // for (int i=0; i<n; i++){
    //     cout<<v[i].first<<" "<< v[i].second<<endl;
    // }
    cout<<ans;
    return 0;
}
