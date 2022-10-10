for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))

    res = 0

    for i in range(n, 0, -1):
        res += i

    for i in range(n):
        if arr[i] < i:
            res-= n-i
    print(res)
    
