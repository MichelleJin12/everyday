#1546

a = int(input())
c = 0
b = []
d = []
b.append(input())
d = b[0].split(' ')

for i in b:
    c += i/max(int(d))*100

print(c/len(d))
