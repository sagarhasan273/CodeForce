for _ in range(int(input())):
    s = input()
    flag = 0

    for i in range(1, len(s)-1):
        if flag:
            break
        for j in range(i, len(s)-1):
            a = s[:i]
            b = s[i:j+1]
            c = s[j+1:]
            if (a <= b and c <= b):
                print(a, b, c)
                flag = 1
                break
            elif a >= b and b <= c:
                print(a, b, c)
                flag = 1
                break
    if not flag:
        print(": (")
    
