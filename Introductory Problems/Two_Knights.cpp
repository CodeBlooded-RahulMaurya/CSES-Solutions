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
#define deb2(x,y) cout << #x<<" "<<x<<" "<<#y<<" "<<y<<"\n";
#define deb3(x,y,z) cout << #x<<" "<<x<<" "<<#y<<" "<<y<<" "<<#z<<" "<<z<<"\n";
#define ios()  ios::sync_with_stdio(0);cin.tie(0)
#define tc     int testCase;cin>>testCase;while(testCase--)
using namespace std;

void readFile() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}
//----------------------------------------------------------------------------------
int main() {
    //readFile();
     ios();
     int n;
     cin>>n;
     for (size_t t = 1; t <= n; t++)
     {
        if (t == 1)
             cout << 0 << endl;
         else if (t == 2)
         {
             cout << 6 << endl;
         }
         else
         {
             ll a1 = t * t, a2 = a1 * (a1 - 1)/2;
             cout << a2 - 4 * (t - 1) * (t - 2) << endl;
         }
     }
     
    
    return 0;
}
