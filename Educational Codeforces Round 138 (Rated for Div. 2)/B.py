for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))

    res = []
    for i in range(n):
        res.append([b[i], a[i]])
    res.sort()
    s = 0
    for i in range(n-1):
        s += res[i][0]
        s += res[i][1]
    
    s += res[n-1][1]
    print(s)
