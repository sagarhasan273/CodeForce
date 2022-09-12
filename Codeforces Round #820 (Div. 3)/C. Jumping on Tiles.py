charMap = {}
count = 1
for i in "abcdefghijklmnopqrstuvwxyz":
    charMap[i] = count
    count += 1

for _ in range(int(input())):
    string = [i for i in input()]

    res = [charMap[string[0]], charMap[string[-1]]]
    first, last = min(res), max(res)
    res = []

    for i, c in enumerate(string):
        if charMap[c] >= first and charMap[c] <= last:
            res.append(i+1)

    cost = 0
    l = len(res)

    cost_ans = [charMap[string[i-1]] for i in res]
    cost_ans.sort()
    for i in range(1, l):
        cost += cost_ans[i] - cost_ans[i-1]

    print(cost, l)
    print(*res)

