for _ in range(int(input())):
    rows, cols, sx, sy, d = list(map(int, input().split()))
    dp = [[-1 for _ in range(cols)] for _ in range(rows)]

    for i in range(rows):
        if abs(i-(sx-1)) + abs(0-(sy-1)) <= d:
            dp[i][0] = float('inf')
        else:
            dp[i][0] = 1 + max(dp[i-1][0], -1)
    
    for i in range(cols):
        if abs(0-(sx-1)) + abs(i-(sy-1)) <= d:
            dp[0][i] = float('inf')
        else:
            dp[0][i] = 1 + max(dp[0][i-1], -1)
    
    for i in range(1, rows):
        for j in range(1, cols):
            if abs(i-(sx-1)) + abs(j-(sy-1)) <= d:
                dp[i][j] = float('inf')
            else:
                dp[i][j] = 1 + min(dp[i-1][j], dp[i][j-1])

    if dp[-1][-1] < float('inf'):
        print(dp[-1][-1])
    else:
        print(-1)