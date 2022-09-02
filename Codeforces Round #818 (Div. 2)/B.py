import collections


for _ in range(int(input())):
    n, k, r, c = map(int, input().split())
    grid = [['.' for _ in range(n+2)] for _ in range(n+2)]

    def helper(i, j):
        if i < 0 or i >= n+2 or j < 0 or j >= n+2 or grid[i][j] == "X":
            return
        grid[i][j] = 'X'
        helper(i, j+k)
        helper(i, j-k)
        helper(i-1, j+1)
        helper(i+1, j-1)

    helper(r-1, c-1)

    for i in range(1, n+1):
        res = ''
        for j in range(2, n+2):
            res += grid[i][j]
        print(res)
