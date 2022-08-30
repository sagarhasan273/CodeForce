for _ in range(int(input())):
    n = int(input())
    s = input()
    hashMap = {'T':1,'m':1,'i':1,'r':1,'u':1}
    if n == 5:
        flag = True
        for i in s:
            if i in hashMap and hashMap[i]:
                hashMap[i] -= 1
            else:
                print("No")
                flag = False
                break
        if flag:
            print("Yes")
    else:
        print("No")