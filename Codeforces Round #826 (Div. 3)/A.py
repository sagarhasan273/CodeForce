for _ in range(int(input())):
    a, b = map(str, input().split())

    if a[-1] == b[-1]:
        if a[-1] == "S" and len(a) < len(b):
            print(">")
        elif a[-1] == "S" and len(a) > len(b):
            print("<")
        elif a[-1] == "L" and len(a) > len(b):
            print(">")
        elif a[-1] == 'L' and len(a) < len(b):
            print("<")
        else:
            print("=")
    
    elif a[-1] == "S" and (b[-1] == 'L' or b[-1] == "M"):
        print("<")
    elif b[-1] == "S" and (a[-1] == 'L' or a[-1] == "M"):
        print(">")
    
    elif a[-1] == 'L' and (b[-1] == "M" or b[-1] == 'S'):
        print(">")
    
    elif b[-1] == 'L' and (a[-1] == "M" or a[-1] == 'S'):
        print("<")
    
