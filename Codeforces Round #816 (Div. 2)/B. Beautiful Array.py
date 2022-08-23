for _ in range(int(input())):
    n, k, b, s = list(map(int, input().split()))
 
    ans = [0 for _ in range(n)]
    ans[0] = b*k
    s -= b*k
    for i in range(n):
        if s > 0:
            ans[i] += min(s, k-1)
            s -= min(s, k-1)
 
    print(*ans) if not s else print(-1)