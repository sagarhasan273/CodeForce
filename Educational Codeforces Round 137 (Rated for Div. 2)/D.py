n = int(input())
a = int(input(), 2)
temp = a
mx = a|temp
for i in range(7):
    temp = temp >> 1
    m = a|temp
    if mx < m:
        mx = m

print(bin(mx).replace('0b', ''))
