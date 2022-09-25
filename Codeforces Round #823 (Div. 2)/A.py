for _ in range(int(input())):
    n, c = map(int, input().split())

    array = list(map(int, input().split()))

    hashMap = {}
    for a in array:
        if a not in hashMap:
            hashMap[a] = 0
        hashMap[a] += 1
    
    cost = 0

    for v in hashMap.values():
        cost += min(c, v)

    print(cost)
