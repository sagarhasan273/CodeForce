import math

for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))

    p = arr[0]
    flag = True

    for i in range(1, n):
        p = math.gcd(p, arr[i])
        print(p)
    
    
    if p >= n:
        flag = False
    
    if flag:
        print("YES", p)
    else:
        print("NO")
