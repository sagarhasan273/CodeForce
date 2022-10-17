for _ in range(int(input())):
    n = int(input())
    
    arr = []

    for i in range(n):
        arr.append(i+1)
    
    arr[1], arr[-1] = arr[-1], arr[1]

    print(*arr)