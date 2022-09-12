charMap = {}
count = 1
for i in "abcdefghijklmnopqrstuvwxyz":
    charMap[str(count)] = i
    count += 1

for _ in range(int(input())):
    l = int(input())
    numbers = [i for i in input()]

    s = ''
    i = l-1

    while i >= 0:
        if numbers[i] == '0':
            s = charMap[numbers[i-2]+numbers[i-1]] + s
            i -= 3
        else:
            s = charMap[numbers[i]] + s
            i -= 1
    
    print(s)