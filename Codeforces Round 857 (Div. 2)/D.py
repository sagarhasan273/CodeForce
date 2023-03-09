import bisect


for _ in range(int(input())):
    n = int(input())

    arr = []
    res = float('inf')
    for i in range(n):
        a, b = map(int, input().split())
        arr.sort()
        index = bisect.bisect_left(arr, a)
        if 0 <= index < len(arr):
            res = min(res, abs(arr[index]-a))
        
        arr.append(b)
    
    print(res)
