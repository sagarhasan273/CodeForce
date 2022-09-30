for _ in range(int(input())):
    n = int(input())

    typ = list(map(int, input().split()))
    arr = list(map(int, input().split()))

    zeroA = []
    oneA = []
    one, zero = 0, 0
    for i in range(n):
        if typ[i] == 1:
            oneA.append(arr[i])
            one += 1
        else:
            zeroA.append(arr[i])
            zero += 1
    
    damage = 0

    if one == zero:
        arr.sort(reverse=True)
        for i in range(n-1):
            damage += arr[i]*2
        
        damage += arr[-1]

    elif one < zero:
        oneA.sort(reverse=True)
        zeroA.sort(reverse=True)
        for i in range(one):
            damage += oneA[i]*2
            damage += zeroA[i]*2
        for i in range(one, zero):
            damage += zeroA[i]
    elif one > zero:
        oneA.sort(reverse=True)
        zeroA.sort(reverse=True)
        for i in range(zero):
            damage += oneA[i]*2
            damage += zeroA[i]*2

        for i in range(zero, one):
            damage += oneA[i]
    
    print(damage)