n, m = map(int, input().split())
arr = list(map(int, input().split()))
ans = []
s = int(n*(n+1) / 2)
x = arr[0]
for i in range(1, n):
    if x != arr[i]:
        s += (i*(n-i))
        x = arr[i]

for _ in range(m):
    i, x = map(int, input().split())

    if i < n:
        if arr[i] == arr[i-1] and x != arr[i]:
            s += (i*(n-i))
        elif arr[i] != arr[i-1] and x == arr[i]:
            s -= (i*(n-i))
    
    i -= 1

    if i > 0:
        if arr[i] == arr[i-1] and x != arr[i-1]:
            s += (i*(n-i))
        elif arr[i] != arr[i-1] and x == arr[i-1]:
            s -= (i*(n-i))
    
    arr[i] = x
    ans.append(s)

print(*ans)