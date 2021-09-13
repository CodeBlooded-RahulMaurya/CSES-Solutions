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
    int t;
    vector<int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        m.push_back(t);
    }
    sort(m.begin(), m.end());
    int mid;
    if(n%2==0){
         mid = m[n/2];
    }
    else {
         mid = (m[n/2] + m[n/2+1])/2;
    }
    ll ans = 0;
    for(int i=0; i<n; i++){
        ans += abs(mid-m[i]);
    }
    cout<<ans<<"\n";
    return 0;
}
