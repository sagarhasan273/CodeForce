from itertools import count


for _ in range(int(input())):
    def gcd(a,b):
        if a == 0:
            return b
        return gcd(b % a, a)

    count = 0
    n = int(input())
    for i in range(1, n+1):
        for j in range(1, n+1):
            g = gcd(i, j)
            l = i*j // g
            if l/g  <= 3:
                count += 1
    
    print(count)