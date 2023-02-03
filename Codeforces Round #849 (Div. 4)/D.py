for _ in range(int(input())):
    n = int(input())
    s = input()

    hmap = {}
    for c in s:
        if c not in hmap:
            hmap[c] = 0
        hmap[c] += 1
    
    res = 0

    dis = set()

    for c in s:
        dis.add(c)

        hmap[c] -= 1

        if hmap[c] == 0:
            del hmap[c]
        
        res = max(res, len(dis) + len(hmap))
    
    print(res)