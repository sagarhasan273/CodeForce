for _ in range(int(input())):
    n = int(input())
    string = '0' + input()
    arr =  [0] + list(map(int, input().split()))

    ans = 0
    i = 0

    while i <= n:
        mn = arr[i]
        sm = arr[i]
        j = i + 1

        while j <= n and string[j] == '1':
            mn = min(mn, arr[j])
            sm += arr[j]
            j += 1
        
        ans += sm - mn
        i = j
    
    print(ans)
