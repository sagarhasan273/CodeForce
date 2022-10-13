for _ in range(int(input())):
    n = int(input())

    arr = list(map(int, input().split()))

    arr.sort()
    flag = True

    for i in range(1, n):
        if arr[i-1] == arr[i]:
            flag = False
            break
    
    if flag:
        print("YES")
    else:
        print("NO")