for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))

    even = odd = 0

    for i in range(n):
        if arr[i] % 2 == 0:
            even += arr[i]
        else:
            odd += arr[i]

    flag = even > odd

    if flag:
        print("YES")
    else:
        print("NO")