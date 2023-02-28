for _ in range(int(input())):
    n = int(input())
    s = input()
    flag = False
    
    j = 1
    r = ""
    while len(r) < 10*5:
        if j % 3 == 0:
            r += 'F'
        if j % 5 == 0:
            r += 'B'
        j += 1

    if s in r:
        print("YES")
    else:
        print("NO")