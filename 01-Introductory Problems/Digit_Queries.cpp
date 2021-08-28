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
    int queries;
    cin >> queries;
    vector<ll> powerOfTen(19, 1);
    for (int i = 1; i < 19; i++)
        powerOfTen[i] = powerOfTen[i - 1] * 10;
    while (queries--)
    {
        ll index;
        cin >> index;
        ll digitSoFar = 0;
        ll digitsBeforeActualBlock = 0;
        int numberOfDigits;
        for (int i = 1; i <= 18; i++)
        {
            digitSoFar += (powerOfTen[i] - powerOfTen[i - 1]) * i;
            if (digitSoFar >= index)
            {
                numberOfDigits = i;
                break;
            }
            digitsBeforeActualBlock += (powerOfTen[i] - powerOfTen[i - 1]) * i;
        }
        ll smallestValue = powerOfTen[numberOfDigits - 1];
        ll largestValue = powerOfTen[numberOfDigits] - 1;
        ll bestValue = 0;
        ll startingPositionOfBestValue;
        while (smallestValue <= largestValue)
        {
            ll actualValue = (smallestValue + largestValue) / 2;
            ll startingPositionOfActualValue = digitsBeforeActualBlock + 1 + (actualValue - powerOfTen[numberOfDigits - 1]) * numberOfDigits;
            if (startingPositionOfActualValue <= index)
            {
                if (actualValue > bestValue)
                {
                    bestValue = actualValue;
                    startingPositionOfBestValue = startingPositionOfActualValue;
                }
                smallestValue = actualValue + 1;
            }
            else
                largestValue = actualValue - 1;
        }
        string number = to_string(bestValue);
        cout << number[index - startingPositionOfBestValue] << endl;
    }
    return 0;
}