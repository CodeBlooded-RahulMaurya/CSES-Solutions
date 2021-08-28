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
     unsigned int nTic, mCust;
     cin >> nTic >> mCust;
     unsigned int m[mCust];
     vector<unsigned int> n(nTic);
     for (size_t i = 0; i < nTic; i++)
     {
         cin >> n[i];
    }
    for (size_t i = 0; i < mCust; i++)
    {
        cin>>m[i];
    }
    sort(n.begin(), n.end());
    unsigned int d, ind;
    if(nTic==1){
        for (int i=0; i<mCust; i++){
            if(i==0){
                cout<<n[0]<<"\n";
            }
            else cout<<"-1\n";
        }
        return 0;
    }
    for(int i=0; i<mCust; i++){
         d = m[i];
         try {
             if(n.size()>0){
             ind = lower_bound(n.begin(), n.end(), d) - n.begin();}
             else 
                ind = 0;
             }

         catch (const char *msg ){
             ind = 0;
         }
         
         if (n.size()>0 && n[ind] <= d)
         {
             cout << n[ind] << "\n";
             n.erase(n.begin() + ind);
         }
         else if (n.size() > 0 && ind >= 1 && n[ind - 1] <= d)
         {
             cout << n[ind - 1] << "\n";
             n.erase(n.begin() + ind - 1);
         }
        else{
        // deb3(ind,n[ind],d);
        cout<<-1<<"\n";
        }
    }
    
    return 0;
}
