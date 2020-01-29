#9613
def gcd(x, y):
    if y == 0:
        return x
    else:
        return gcd(y, x%y)
t = int(input())
for _ in range(t):
    a = list(map(int, input().split()))
    n = a[0]
    a = a[1:]
    ans = 0
    for i in range(0, n-1):
        for j in range(i+1, n):
            ans += gcd(a[i], a[j])
    print(ans)
