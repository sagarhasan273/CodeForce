for _ in range(int(input())):
    s = input()
    flag = 0

    a = s[:1]
    b = s[1:-1]
    c = s[-1]
    if (a <= b and c <= b):
        print(a, b, c)
        flag = 1
    elif a >= b and b <= c:
        print(a, b, c)
        flag = 1

    if not flag:
        print(": (")
    
