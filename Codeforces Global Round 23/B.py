for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    one, zero = arr.count(1), arr.count(0)

    count = 0

    for i in range(n-1, -1, -1):
        if arr[i] == 0 and one > 0:
            count += 1
        one -= 1
    
    print(count)
