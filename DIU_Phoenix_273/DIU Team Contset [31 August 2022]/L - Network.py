for _ in range(int(input())):
    n = list(map(int, input().split()))[0]

    network = [[int(e) for e in input().split()] for _ in range(n)]
    
    hashMap = {}
    m = 0
    for i in range(n):
        for j in range(n):
            if network[i][j] not in hashMap:
                hashMap[network[i][j]] = []
            hashMap[network[i][j]].append((i, j))

            m = max(m, network[i][j])

    ans = [float('inf')]
    
    def dfs(i, j, cost, cbl):
        
        if cbl > m:
            ans[0] = min(cost, ans[0])
            return
        
        if i < 0 or j < 0 or i == n or j == n:
            return

        for r, c in hashMap[cbl]:
            x = abs(r-i) + abs(c-j)
            dfs(r, c, cost+x, cbl+1)

        
    for i, j in hashMap[1]:
        dfs(i, j, 0, 2)

    
    print(ans[0])
        

            