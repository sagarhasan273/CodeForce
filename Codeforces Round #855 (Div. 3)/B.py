for _ in range(int(input())):
    n, k = map(int, input().split())
    s = input()
    lower = [0] * 26
    upper = [0] * 26

    for i in s:
        if i in 'abcdefghijklmnopqrstuvwxyz':
            lower[ord(i) - ord('a')] += 1
        else:
            upper[ord(i)-ord('A')] += 1
    
    r = 0
    for i in range(26):
        if lower[i] == upper[i]:
            r += lower[i]
            continue
        if k <= 0:
            continue
        r += min(lower[i], upper[i])

        v = abs(lower[i] - upper[i])

        v = v//2
        if v >= k:
            r += k
            k -= k
        else:
            r += v
            k -= v 
        

    
    print(r)

    