for _ in range(int(input())):
    n = int(input())
    s = input()

    a, b = 0, 0
    flag = True

    for c in s:
        if c == 'U':
            b += 1
        elif c == 'D':
            b -= 1
        elif c == 'R':
            a += 1
        else:
            a -= 1

        if flag and a == 1 and b == 1:
            print("YES")
            flag = False
            break

    if flag:
        print("NO")
    
    