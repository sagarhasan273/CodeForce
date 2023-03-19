for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))

    neg, pos = 0, 0

    for i in arr:
        if i > 0:
            pos += 1
        else:
            neg += 1
    
    res1 = []

    for i in range(pos):
        res1.append(i+1)
    
    temp = res1[-1]
    for i in range(neg):
        temp -= 1
        res1.append(temp)
    
    res2 = []

    for i in range(min(pos, neg)):
        res2.append(1)
        res2.append(0)
    
    for i in range(neg, pos):
        t = 1 if len(res2) == 0 else res2[-1] + 1
        res2.append(t)
    
    print(*res1)
    print(*res2)