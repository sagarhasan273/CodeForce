for _ in range(int(input())):
    n, d, h = map(int, input().split())
    arr = list(map(int, input().split()))
    isosceles_area = d*h/2
    s = isosceles_area
    prev = arr[-1]
    for i in range(n-2, -1, -1):
        dis = prev - arr[i]
        print(dis)
        if dis < h and (d-(dis*2)) > 0:
            s += (isosceles_area - ((d-(dis*2))*(h-dis)/2))
        else:
            s += isosceles_area
        prev = arr[i]
    print(s)