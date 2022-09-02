for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    s = sum(arr)
    nxt = s//n

    for _ in range(int(input())):
        query = int(input())

        if query-1 < n:
            print(arr[query-1])
        else:
            print(nxt)