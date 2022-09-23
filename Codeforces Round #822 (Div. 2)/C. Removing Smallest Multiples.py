for _ in range(int(input())):
    n = int(input())
    string = input()

    T = {}
    K = []
    for i in range(1, n+1):
        if string[i-1] == '1':
            pass
        else:
            T[i] = False
            K.append(i)

    total = 0
    for k in K:
        i = 1
        flag = False
        while k*i < n+1 and k*i in T:
            if T[k*i] == False:
                T[k*i] = True
                total += k
            i += 1
  
    print(total)