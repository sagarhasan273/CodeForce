from re import I


for _ in range(int(input())):
    n = int(input())
    b = input()

    i = 0
    count = 0
    while i < n:
        if b[i] == '1':
            j = i 
            while j < n and b[j] == '1':
                j += 1
            count += 1
            i = j 
        else:
            i += 1

    if b.count('0') == 0 or (b[-1] == '1' and count == 1):
        print(0)
    elif b[-1] == '1':
        print((count-1)*2)
    else:
        print((count-1)*2 + 1)
    