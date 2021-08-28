n = int(input())
d = dict()
t = input()
t = list(map( int , t.split(' ')))
for i in t:
    if i not in d.keys():
        d[i] = 1
    else:
        d[i] +=1
print(len(d))
