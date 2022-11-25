for _ in range(int(input())):
    arr = [i for i in input()]
    arr.sort()

    s = ''.join(arr) + ''.join(arr[::-1])

    print(s)