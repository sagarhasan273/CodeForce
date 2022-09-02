def helper(n):
    count = 0
    for i in range(1, n+1):
        for j in range(i, n+1):
            k = n - (i+j)
            if i + j >= k and i + j + k == n and i <= j <= k:
                count += 1
                print(i, j, k)
    
    return count


print(helper(20))