#10992

a= int(input())

for i in range(0,a):
    if i == 0:
        print(" "*(a-1-i)+"*")
        continue
    if i == a-1:
        print("*"*(2*a-1))
        break
    print(" "*(a-1-i)+"*"+" "*(2*i-1)+"*")

        
