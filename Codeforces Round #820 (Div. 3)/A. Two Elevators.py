for _ in range(int(input())):
    a, b, c = map(int, input().split())

    a = abs(a-1)
    b = abs(c-1) + abs(b-c)

    if a == b:
        print(3)
    elif a < b:
        print(1)
    else:
        print(2)
