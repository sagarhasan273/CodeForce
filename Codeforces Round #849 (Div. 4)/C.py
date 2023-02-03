for _ in range(int(input())):
    n = input()
    s = input()

    i = 0
    j = len(s)-1

    while i < j:
        if s[i] == '0' and s[j] == '1':
            i += 1
            j -= 1
        elif s[i] == '1' and s[j] == '0':
            i += 1
            j -= 1
        else:
            break
    
    if i == j:
        print(1)
    elif i > j:
        print(0)
    else:
        print(j-i+1)
    