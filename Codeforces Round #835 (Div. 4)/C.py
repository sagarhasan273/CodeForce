for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    temp = arr.copy()
    temp.sort()
    mx1, mx2 = temp[-1], temp[-2]
    res = []

    for i in range(n):
        if mx1 == arr[i]:
            res.append(arr[i] - mx2)
        else:
            res.append(arr[i]-mx1)
    print(*res)