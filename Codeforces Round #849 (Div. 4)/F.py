for _ in range(int(input())):
    n, q = map(int, input().split())
    arr = list(map(int, input().split()))

    for que in range(q):
        a = list(map(int, input().split()))
        if a[0] == 1:
            l, r = a[1], a[2]
            for i in range(l-1, r):
                s = arr[i]
                t = 0
                while s != 0:
                    t += s%10
                    s = s//10
                arr[i] = t
        else:
            x = a[1]
            print(arr[x-1])


