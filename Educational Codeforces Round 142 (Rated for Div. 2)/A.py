for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))

    one = arr.count(1)

    if one % 2 == 0 or one == 1:
        print(n-(one//2))
    else:
        print((n-one) + (one//2) + 1)