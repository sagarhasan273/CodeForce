for _ in range(int(input())):
    n = int(input())
    d = list(map(int, input().split()))

    a = [d[0]]
    for i in range(1, n):
        a.append(a[-1]+d[i])

    