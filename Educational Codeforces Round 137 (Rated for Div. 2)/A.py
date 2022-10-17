for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))

    l = 10 - n - 1
    s = 0
    for i in range(l, 0, -1):
        s += i
        
    print(s*6)