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
    vector<pair<int,int>> v(n);
    for (size_t i = 0; i < n; i++)
    {
        cin>>v[i].first>>v[i].second;       
    }
    sort(v.begin(), v.end(), [](auto &left, auto &right)
         { return left.second < right.second; });
    int count = 1,mx=1;
    
    // for (size_t i = 0; i < n; i++)
    // {
    //     cout<< v[i].first <<" "<< v[i].second<<endl;
    // }
    int end = v[0].second, start = v[0].first;
    for (size_t i = 1; i < n; i++)
    {
        if(v[i].first<end){
            count+=1;
            mx = max(mx,count);
            // start = max(v[i].first,start);
        }else{
            if(end==v[i-1].second){
                end = v[i].second;
                count = 1;
            }else{
            end = v[i-1].second;
            // count = 1;
            }
        }
    }
    cout<<max(count,mx)<<endl;
    

    return 0;
}
