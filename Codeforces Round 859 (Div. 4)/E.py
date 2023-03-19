for _ in range(int(input())):
    arr = list(map(str, input().split()))
    dr = ['DR']
    n, m, i1, j1, r, c, dr[0] = int(arr[0]), int(arr[1]), int(arr[2]), int(arr[3]), int(arr[4]), int(arr[5]), arr[6] 
    
    ans = [-1]
    mx = [0]
    def dfs(i, j):
        if i == r and j == c:
            ans[0] += 1
            mx[0] = max(mx[0], ans[0])
            print(mx[0])
            return

        if i <= 1 or i >= n or j <= 1 or j >= m:
            ans[0] += 1
            return

        if dr[0] == 'DR':
            dfs(i+1, j+1)
            dr[0] = 'DL'
        if dr[0] == 'DL':
            dfs(i+1, j-1)
            dr[0] = 'UR'
        if dr[0] == 'UR':
            dfs(i-1, j+1)
            dr[0] = 'UL'
        if dr[0] == 'UL':
            dfs(i-1, j-1)
            dr[0] = 'DR'

    
    dfs(i1, j1)

    print(mx[0])