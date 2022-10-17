

n = int(input())

a = input()

sub_string = []

for i in range(n):
    s = []
    for j in range(i):
        s.append(a[j])
        sub_string.append(s)
res = 0

for ar in sub_string:
    v = [i for i in a]
    v.reverse()
    c = 0
    for e in ar[::-1]:
        if e == '1':
            v[c] = '1'
        c += 1

    res = max(res, int("".join(v[::-1]), 2))

print(bin(res).replace('0b', ''))
