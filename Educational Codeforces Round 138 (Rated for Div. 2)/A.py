for _ in range(int(input())):
    n, m = map(int, input().split())
    for _ in range(m):
        a, b = map(int, input().split())

    if n > m:
        print("YES")
    else:
        print("NO")