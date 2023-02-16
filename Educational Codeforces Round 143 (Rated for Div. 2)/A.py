for _ in range(int(input())):
    n, m = map(int, input().split())
    L = [s for s in input()]
    R = [s for s in input()]
    l = L
    def checkPair(s):
        for i in range(len(s)):
            if i == 0:
                continue
            
            if s[i-1] == s[i]:
                return False
        
        return True

    r1 = []
    r2 = []

    while L:
        if not r1:
            r1.append(L[0])
            L = L[1:]
        elif r1 and r1[-1] != L[0]:
            r1.append(L[0])
            L = L[1:]
        else:
            break
    
    if L:
        temp = R + L[::-1]

        print("YES" if checkPair(temp) else "NO")
    
    else:
        while R:
            if not r2:
                r2.append(R[0])
                R = R[1:]
            elif r2 and r2[-1] != R[0]:
                r2.append(R[0])
                R = R[1:]
            else:
                break
        
        if R:
            temp = l + R[::-1]

            print("YES" if checkPair(temp) else "NO")
        else:
            print("YES")