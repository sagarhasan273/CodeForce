def checkDivisible(a, b, k):
    if ((a+k)*b) % 4 == 0:
        return a, b, True
    if ((b+k)*a) % 4 == 0:
        return b, a, True
    return a, b, False


for _ in range(int(input())):
    n, k = [int(x) for x in input().split()]
    numbers = [i+1 for i in range(n)]
    checked, res = set(), []
    flag = True
    for i in range(n):
        if numbers[i] in checked:
            continue
        checked.add(numbers[i])
        flag = True
        for j in range(i, n):
            if numbers[j] in checked:
                continue
            x, y, boolean = checkDivisible(numbers[i], numbers[j], k)
            if not boolean:
                continue
            else:
                checked.add(x)
                checked.add(y)
                res.append([x, y])
                flag = False
                break
        if flag:
            break
    if flag:
        print("No")
    if len(checked) == n:
        print("Yes")
        for a, b in res:
            print(a, b)
    