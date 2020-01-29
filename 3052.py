#3052

a = []
b = []
for i in range(10):
    a.append(int(input()))
for i in range(len(a)):
    if a[i]%42 in b:
        continue
    else:
        b.append(a[i]%42)
print(len(b))
