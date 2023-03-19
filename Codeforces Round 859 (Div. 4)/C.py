for _ in range(int(input())):
    n = int(input())
    arr = [i for i in input()]

    j = 0
    need = 1
    while j < n:
        if arr[j] == '0':
            need = 1
            j += 1
            continue
        if arr[j] == '1':
            need = 0
            j += 1
            continue

        if need:
            v = arr[j]
            for i in range(n):
                if arr[i] == v:
                    arr[i] = '1'
            need = 0
        else:
            v = arr[j]
            for i in range(n):
                if arr[i] == v:
                    arr[i] = '0'
            need = 1
        
        j += 1
    
    flag = True

    for i in range(1, n):
        if arr[i] == arr[i-1]:
            flag = False
            break

    print("YES" if flag else "NO")