for _ in range(int(input())):
    n, k = map(int, input().split())

    string = [s for s in input()]
    string.sort()

    div = n//k
    hmap = {}
    i = 0
    ch_set = "abcdefghijklmnopqrstuvwxyz"
    for c in "abcdefghijklmnopqrstuvwxyz":
        hmap[c] = i
        i += 1

    res = []
    r = []
    for i in range(n):
        if i != 0 and (i)%div == 0:
            res.append(r)
            r = []
        r.append(string[i])
    res.append(r)
    print(res)