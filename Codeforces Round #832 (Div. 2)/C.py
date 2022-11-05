for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    m = min(arr)

    if m in arr[1:] and m != arr[0]:
        print("Alice")
    else:
        print("Bob")