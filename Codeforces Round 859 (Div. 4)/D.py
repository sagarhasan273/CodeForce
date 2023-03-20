import sys;input=sys.stdin.readline

for _ in range(int(input())):
    n, q = map(int, input().split())
    arr = list(map(int, input().split()))

    total = sum(arr)

    for i in range(1, n):
        arr[i] = arr[i-1] + arr[i]

    for que in range(q):
        flag = False
        l, r, k = map(int, input().split())
        t = ((r-l)+1) * k
        l -= 2
        temp = total
        if l == -1:
            temp -= arr[r-1]
        else:
            temp -= (arr[r-1] - arr[l])

        temp += t

        if temp%2 == 1:
            flag = True
    
        print("YES" if flag else "NO")