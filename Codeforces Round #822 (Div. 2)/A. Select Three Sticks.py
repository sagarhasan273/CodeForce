for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    arr.sort()

    mn = float("inf")
    for i in range(1, n-1):
        a, b, c = arr[i-1], arr[i], arr[i+1]
        mn = min(mn, ((b-a) + (c-b)))
    print(mn)
