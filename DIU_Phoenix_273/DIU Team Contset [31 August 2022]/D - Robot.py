for _ in range(int(input())):
    array = [i for i in input()]
    a, b = map(int, input().split())

    ai, bi = array.index("A"), array.index("B")

    if ai == bi:
        print("unsafe")
    elif ai > bi:
        print("safe")
    else:
        while ai < len(array) and bi > -1:
            ai += a
            bi -= b
            if ai == bi:
                print("unsafe")
                break
            elif ai > bi:
                print("safe")
                break

