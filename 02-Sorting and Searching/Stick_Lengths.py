"""
 ____  _       _            ____              _ 
|  _ \(_)_   _(_)_ __   ___/ ___|  ___  _   _| |
| | | | \ \ / / | '_ \ / _ \___ \ / _ \| | | | |
| |_| | |\ V /| | | | |  __/___) | (_) | |_| | |
|____/|_| \_/ |_|_| |_|\___|____/ \___/ \__,_|_|                                      
                                                  
"""
n = int(input())
l = list(map(int,input().split()))
m = {}
for e in l:
    if e not in m.keys():
        m[e]=1
    else:
        m[e]+=1
m = sorted(m.items(),key = lambda x:x[1], reverse = True)
val = m[0][0]
ans = 0
for i in range(1,len(m)):
    ans += abs(m[i][0]-m[0][0])*m[i][1]
print(ans)  
