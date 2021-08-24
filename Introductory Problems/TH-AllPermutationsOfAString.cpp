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

void permute(string st, int l, int r, int *ct){
    if(l==r){
        cout<<st<<endl;
        *ct+=1;
    }
    else {
        for(int i=l; i<=r; i++){
            if(st[l]==st[i] && l!=0){
                continue;
            }
            swap(st[l],st[i]);
            permute(st,l+1,r,ct);
            swap(st[i], st[l]) ;
        }
    }
}

int main()
{
    //readFile();
    ios();
    string st;
    cin>>st;
    int ct=0;
    permute(st,0,st.length()-1,&ct);
    cout<<ct<<endl;
    return 0;
}
