'''
 ____  _       _            ____              _ 
|  _ \(_)_   _(_)_ __   ___/ ___|  ___  _   _| |
| | | | \ \ / / | '_ \ / _ \___ \ / _ \| | | | |
| |_| | |\ V /| | | | |  __/___) | (_) | |_| | |
|____/|_| \_/ |_|_| |_|\___|____/ \___/ \__,_|_|                                      
                                                  
'''
from bisect import bisect_left

n,m = map(int,input().split())
nT = list(map(int, input().split()))
nT.sort()
mC = list(map(int, input().split()))
for i in mC:
    ind = bisect_left(nT,i)
    if ind:
        if(nT[ind]==i):
            print(i)
            nT = nT[:i] + nT[i+1:]
        elif(nT[ind]>i):
            print(nT[ind-1])
            nT = nT[:ind-1] + nT[ind:]
    elif(ind==0):
        if(nT[ind]<=i):
            print(nT[ind])
            nT = nT[ind:]
        else:
            print(-1)
    #print(nT, mC)