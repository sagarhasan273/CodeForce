from pickletools import stringnl_noescape


for _ in range(int(input())):
    n = int(input())
    string = [int(i) for i in input()]
    arr = list(map(int, input().split()))

    res = 0
    max_so_far = 0
    curr_max = 0
