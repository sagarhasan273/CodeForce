for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))

    total = sum(arr)
    res = total
    
    temp = arr

    i = 0
    while i < n-1:
        if temp[i] < 0 and temp[i+1] < 0:
            temp[i] = -temp[i]
            temp[i+1] = -temp[i+1]
        i+=1
    
    res = max(res, sum(temp))
    
    temp1 = temp

    i = 0
    while i < n-1:
        if temp[i] < 0:
            temp[i] = -temp[i]
            temp[i+1] = -temp[i+1]
            i += 1
        i += 1
    res = max(res, sum(temp))

    i = 1
    while i < n:
        if temp1[i] < 0:
            temp1[i] = -temp1[i]
            temp1[i-1] = -temp1[i-1]
            i += 1
        i += 1
    res = max(res, sum(temp1))

    print(res)