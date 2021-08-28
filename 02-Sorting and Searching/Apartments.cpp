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
    int nApplicants = 0, mAppartments = 0, maxDiff = 0;
    cin >> nApplicants >> mAppartments >> maxDiff;
    int nApps[nApplicants], mAppartment[mAppartments];
    for (int i = 0; i < nApplicants; i++)
        cin >> nApps[i];
    for (size_t i = 0; i < mAppartments; i++)
    {
        cin >> mAppartment[i];
    }
    sort(nApps, nApps + nApplicants);
    sort(mAppartment, mAppartment + mAppartments);
    int i = 0; //desired appartments
    int j = 0; //available appartments
    int ans = 0;
    while (i < nApplicants && j < mAppartments)
    {
        if (abs(nApps[i] - mAppartment[j]) <= maxDiff)
        {
            ans += 1;
            i++;
            j++;
        }
        else
        {
            if (nApps[i] < mAppartment[j])
                i += 1;
            else
                j += 1;
        }
    }
    cout << ans << endl;

    return 0;
}
