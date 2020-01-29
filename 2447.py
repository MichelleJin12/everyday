#2446


for i in range(0,a):
    print(" "*i+"*"*((2*(a-1-i))+1))
for i in range(a-2, 0, -1):
    print(" "*(i-1)+"*"*(2*(a-1-i)-1))
    
print("*"*((2*a)-1))
