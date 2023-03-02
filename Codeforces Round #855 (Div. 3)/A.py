for _ in range(int(input())):
    n = int(input())
    s = input()
    s = s.lower()

    flag = True
    if s and s[0] == 'm':
        s = s.lstrip('m')
    else:
        flag = False

    if s and s[0] == 'e':
        s = s.lstrip('e')
    else:
        flag = False
    
    if s and s[0] == 'o':
        s = s.lstrip('o')
    else:
        flag = False
    
    if s and s[0] == 'w':
        s = s.lstrip('w')
    else:
        flag = False

    if flag and not s:
        print('YES')
    else:
        print("NO")

        
        
