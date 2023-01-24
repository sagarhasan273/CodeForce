for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))


    m1 = n//2
    m2 = m1+1 if n % 2 == 0 else m1 + 2

    while m1 >= 0 and m2 < n and arr[m1-1] == m1 and arr[m2-1] == m2:
        m1 -= 1
        m2 += 1
    if m1 == 0:
        print(0)
    
    m1 = n//2
    m2 = m1+1 if n % 2 == 0 else m1 + 2

    if arr[0] == m1 and arr[-1] == m2:
        print(m1-1)
    else:
        print(m1)
    