for _ in range(int(input())):
    n, m = map(int, input().split())

    if n >= 2 and m >= 2:
        print(2, 2)
    else:
        print(n, m)