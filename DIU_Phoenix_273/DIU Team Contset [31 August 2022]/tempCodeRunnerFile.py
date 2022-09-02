for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))

    for _ in range(int(input())):
        query = int(input())

        for i in range(n, query):
            if i == n:
                s = sum(arr)
                arr.append(s//n)
                n += 1
    
        print(arr[query-1])