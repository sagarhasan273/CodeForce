for _ in range(int(input())):
    a = input()
    b = input()
    
    count = set()
    for i in a+b:
        count.add(i)
    
    print(len(count) - 1)