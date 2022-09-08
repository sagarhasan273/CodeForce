for _ in range(int(input())):
    n = int(input())
    array = list(map(int, input().split()))
    mx = max(array)
    idx = array.index(mx)
    print(idx+1)