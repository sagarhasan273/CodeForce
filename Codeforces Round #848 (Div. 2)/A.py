for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))


    if arr.count(-1) >= 2:
        for i in range(n):
            if i + 1 < n and arr[i] == arr[i+1] and arr[i] == -1:
                arr[i] = 1
                arr[i+1] = 1
                break
        print(sum(arr))
    elif arr.count(-1) == 0:
        print(sum(arr)-4)
    else:
        print(sum(arr))
