for _ in range(int(input())):
    n, k = map(int, input().split())
    arr = list(map(int, input().split()))

    if 1 in arr:
        print("YES")
    else:
        print("NO")