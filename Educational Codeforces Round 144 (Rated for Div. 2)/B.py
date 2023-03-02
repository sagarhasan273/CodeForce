for _ in range(int(input())):
    a = input()
    b = input()

    if a[0] == b[0]:
        print("YES")
        print(a[0]+"*")
        continue
    if a[-1] == b[-1]:
        print('Yes')
        print('*'+a[-1])
        continue
    
    r = ""
    for i in range(len(a)-1):
        if a[i]+a[i+1] in b:
            r = '*'+a[i]+a[i+1]+'*'
            break
    
    print(f"Yes\n{r}" if r else "No")

