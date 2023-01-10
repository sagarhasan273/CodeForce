for _ in range(int(input())):
    n, x = map(int, input().split())

    n = bin(n).replace('0b', '')
    x = bin(x).replace('0b', '')

    if len(n) < len(x):
        print(-1)
        continue
    elif n == x:
        print(int(n, 2))
    elif len(n) == len(x):
        num = []
        for i in range(len(n)):
            if n[i] == x[i] and n[i] == '1':
                num += ['1']
            else:
                num += ['0']
    
        for i in range(len(num)):
            if num[i] == '0':
                num[i] = '1'
                break
        print(int("".join(num), 2))
    
    elif x.count('1') == 0:
        num = []
        for i in range(len(n)):
            num += ['0']
        
        num = ['1'] + num
        print(int("".join(num), 2))
    else:
        l = len(x)-1
        num = [i for i in n]
        for i in range(len(n)-1, -1, -1):
            if l >= 0 and x[l] == '1' and num[i] != '1':
                num[i] = '1'
                break
            l -= 1
        
        print(int("".join(num), 2))