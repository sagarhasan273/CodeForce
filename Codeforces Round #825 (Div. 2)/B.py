for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))

    if n == 1:
        print("YES")
    else:
        diff = a[0] - a[1]

        flag = False

        for i in range(1, n):
            if a[i-1] - a[i] != diff:
                if a[i] != 1:
                    flag = True
                else:
                    flag == False
        
        if flag:
            print("NO")
        else:
            print("YES")