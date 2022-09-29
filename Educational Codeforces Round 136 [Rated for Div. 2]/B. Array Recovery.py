for _ in range(int(input())):
    n = int(input())
    d = list(map(int, input().split()))

    a = [d[0]]
    for i in range(1, n):
        a.append(a[-1]+d[i])

    ans = set()

    def dfs(r, i, s):
        if i < 0 or i == n:
            ans.add(s)
            return
        
        if r[-1] - d[i] >= 0:
            dfs(r + [r[-1] - d[i]], i+1, s+str(r[-1] - d[i]))
        
        if r[-1] + d[i] >= 0:
            dfs(r + [r[-1] + d[i]], i+1, s+str(r[-1] + d[i]))
    
    dfs([d[0]], 1, '')
    l = len(ans)
    
    if l > 1:
        print(-1)
    else:
        print(*a)