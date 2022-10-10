for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))

    ac = a.count(1)
    bc = b.count(1)

    if ac == bc:
        cnt = 0
        for i in range(n):
            if a[i] == 1 and b[i] == 1:
                cnt += 1
        
        if cnt == bc:
            print(0)
        else:
            print(1)
    
    elif ac > bc:
        res = abs(ac - bc)
        cnt = 0
        for i in range(n):
            if a[i] == 1 and b[i] == 1:
                cnt += 1
        
        if cnt == bc:
            print(res)
        else:
            print(res+1)
    else:
        res = abs(ac - bc)
        cnt = 0
        for i in range(n):
            if a[i] == 1 and b[i] == 1:
                cnt += 1
        
        if cnt == ac:
            print(res)
        else:
            print(res+1)