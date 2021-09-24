 
def subsetSums(arr, l, r, sum=0):
    if l > r:
        s.append(sum)
        return
 
    # Subset including arr[l]
    subsetSums(arr, l + 1, r, sum + arr[l])
 
    # Subset excluding arr[l]
    subsetSums(arr, l + 1, r, sum)
 
 
# Driver code
n = int(input())
arr = list(map(int,input().split()))
global s
s = []
subsetSums(arr, 0, n - 1)
s = set(s)
s = list(s)
s.sort()
m = s[0]
# print(s)
for i in s:
    #print(i,m)
    if(i>m):
        print(m)
        break
    else:
        m+=1
 