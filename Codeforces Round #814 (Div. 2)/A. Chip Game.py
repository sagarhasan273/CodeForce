for _ in range(int(input())):
    rows, cols = [int(x) for x in input().split()]
    if rows % 2 == 0:
        if cols % 2 == 0:
            print("Tonya")
        else:
            print("Burenka")
    else:
        if cols % 2 == 0:
            print("Burenka")
        else:
            print("Tonya")