for _ in range(int(input())):
    n = int(input())

    if n%2:
        print(1, end=" ")
    
    for i in range(n-2, [0, 1][n%2], -1):
        print(i, end=" ")
    
    print(n-1, n)