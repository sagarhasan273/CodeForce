for _ in range(int(input())):
    s = input()
    flag = 0

    if s.count('a') == 0:
        print(s[0], s[1:-1], s[-1])
        flag = 1
    elif s.count('a') == 1:
        i = s.index('a')

        if i == 0:
            print(s[i], s[1:-1], s[-1])
        elif i == len(s)-1:
            print(s[0], s[1:-1], s[-1])
        else:
            print(s[:i], s[i], s[i+1:])
        flag = 1
    elif s.count('a') >= 2:
        i = 0
        while s[i] != 'a': i+=1

        j = len(s)-1
        while s[j] != 'a': j-=1

        print(s[:i+1], s[i+1:j], s[j:])
        flag = 1

    if not flag:
        print(": (")
    
