A = int(input())
B = int(input())
C = int(input())
D = list(str(A*B*C))
E = [0,0,0,0,0,0,0,0,0,0]
for i in D:
    if i == '0':
        E[0] += 1
    elif i == '1':
        E[1] += 1
    elif i == '2':
        E[2] += 1
    elif i == '3':
        E[3] += 1
    elif i == '4':
        E[4] += 1
    elif i == '5':
        E[5] += 1
    elif i == '6':
        E[6] += 1
    elif i == '7':
        E[7] += 1
    elif i == '8':
        E[8] += 1
    else:
        E[9] += 1

for i in E:
    print(i)
        
