for _ in range(int(input())):
    n = int(input())
    string = ""
    for i in range(n):
        string += "BAN"
    if n == 1:
        print(1)
        print(1, 2)
    elif n == 2:
        print(1)
        print(1, 6)
    else:
        res = []
        i = 0
        k = 3*n
        while i < k:
            
            res.append([i+1, k])

            k -= 3
            i += 3

        print(len(res))
        for i in range(len(res)):
            print(*res[i])
        