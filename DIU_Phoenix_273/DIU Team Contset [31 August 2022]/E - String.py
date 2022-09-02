for _ in range(int(input())):
    s, k = list(map(str, input().split()))
    k = int(k)
    r = []
    l = len(s)
    r_l = 0

    for i in "abcdefghijklmnopqrstuvwxyz":
        if i in s:
            continue

        r.append(i)
        r_l += 1
        if r_l == l:
            break
    
    if l - r_l == 0:
        print("".join(r))
    elif l - r_l <= k:
        for i in "abcdefghijklmnopqrstuvwxyz":
            if i not in r:
                r.append(i)
                r_l += 1
            if l == r_l:
                break
        r.sort()
        print("".join(r))
    else:
        print("NOPE")


    

