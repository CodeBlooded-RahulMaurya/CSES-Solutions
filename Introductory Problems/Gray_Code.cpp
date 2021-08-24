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
#define tc     int t;cin>>t;while(t--)
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
    if(n==0){
        cout<<0<<endl;
        return 0;
    }
    if(n==1){
        cout<<0<<"\n"<<1<<endl;
        return 0;
    }
     for (int i = 0; i <pow(2, n); i++)
    {
    bitset<16> bset(i) ;
     bset = bset ^ (bset>>1);
        for (int j = n-1; j >=0 ; j--)
        {   
            cout << bset[j];
        }
        cout<<endl;
        
    }

    return 0;
}
