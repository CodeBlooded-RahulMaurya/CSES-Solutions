st = input()
left, right = '', ''
ch = dict()
for i in st:
    if i not in ch.keys():
        ch[i]= 1;
    else:
        ch[i]+=1;
for k,v in ch.items():
    freq = v - v%2;
    ch[k] -= freq;
    for i in range(freq//2):
        left += k
        right += k
Ones = 0
for k in ch.keys():
    if ch[k]>=1:
        Ones+=1
if(Ones>1):
    print("NO SOLUTION")
else:
    if (Ones==1):
        for k in ch.keys():
            if ch[k]==1:
                print(left+k+right[::-1])
    else:
        print(left+right[::-1])
# print(ch, left,right[::-1])
