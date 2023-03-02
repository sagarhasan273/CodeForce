for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    
    res = count = 0
    mx = []
    while arr:
        val = arr.pop()
        if val == 0:
            mx.sort()
            while mx and count != 0:
                res += mx.pop()
                count -= 1
            mx = []
            count += 1

        elif count > 0:
            mx.append(val)
    
    mx.sort()
    while mx and count != 0:
        res += mx.pop()
        count -= 1
    
    print(res)