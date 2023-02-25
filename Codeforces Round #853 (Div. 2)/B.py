def checkPalin(temp):
    if n % 2 == 0 and temp[:m] == temp[m:][::-1]:
        return True
        # l = l.replace('0', '#')
        # l = l.replace('1', '0')
        # l = l.replace('#', '1')
    l = temp[m+1:]
    return temp[:m] == l[::-1]


for _ in range(int(input())):
    n = int(input())
    s = input()

    # s = [i for i in string]

    m = n//2

    if checkPalin(s):
        print("YES")
    else:
        l, r = 0, n-1

        while l < r:
            if s[l] == s[r] and l+1 < r-1:
                l += 1
                r -= 1
            elif s[l] != s[r] and l+1 < r and s[l+1] == s[r]:
                l += 1
            elif s[l] != s[r] and l < r-1 and s[l] == s[r-1]:
                r -= 1
            else:
                l += 1
        
        print(l, r)

