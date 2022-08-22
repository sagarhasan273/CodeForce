for _ in range(int(input())):
    row, col = list(map(int, input().split()))

    if row == 1 and col == 1:
        print(0)
    elif row > col:
        print(row + (col-1) * 2)
    else:
        print(col + (row-1) * 2)