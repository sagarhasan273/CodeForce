for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    arr.sort()

    if n == 1:
        print('YES' if arr[0] == 1 else "NO")
    else:
        s = flag = 1
        for i in range(1, n):
            if arr[i] <= s:
                s += arr[i]
            else:
                flag = 0
                break
        
        print("NO" if not flag else "YES")
