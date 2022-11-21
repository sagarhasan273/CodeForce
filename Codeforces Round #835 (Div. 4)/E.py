for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))

    if arr[0] == 0:
        arr[0] = 1

        count = 0
        for i in range(n):
            if arr[i] == 1:
                for j in range(i+1, n):
                    if arr[j] == 0:
                        count += 1
        
        print(count)
    else:
        

        count = 0
        for i in range(n):
            if arr[i] == 1:
                for j in range(i+1, n):
                    if arr[j] == 0:
                        count += 1

        print(count)
