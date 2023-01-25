for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))

    odd = even = 0
    for i in range(n):
        if arr[i]%2 == 0:
            even += 1
        else:
            odd += 1
    
    if odd > 2:
        res = []

        for i in range(n):
            if arr[i] % 2 == 1:
                res.append(i+1)

            if len(res) == 3:
                break
        print("YES")
        print(*res)
    elif odd >= 1 and even >= 2:
        res = []

        i = 0
        while i < n:
            if arr[i]%2 == 1:
                res.append(i+1)
                break
            i += 1
        
        for i in range(n):
            if arr[i] % 2 == 0:
                res.append(i+1)

            if len(res) == 3:
                break
        print("YES")
        print(*res)
    else:
        print("NO")