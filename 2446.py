#2446
a = int(input())

for i in range(0,a):
    print(" "*i+"*"*((2*(a-1-i))+1))
for i in range(1, a):
    print(" "*(a-1-i)+"*"*((2*i)+1))
    
