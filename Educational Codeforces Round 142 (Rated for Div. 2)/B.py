for _ in range(int(input())):
    a, b, c, d = map(int, input().split())
    alice, bob = a, a
    ans = a
    
    while alice != 0 and c != 0:
        bob += 1
        ans += 1
        alice -= 1
        c -= 1

    while bob != 0 and b != 0:
        alice += 1
        ans += 1
        b -= 1
        bob -= 1
    
    ans += min(alice, bob) + 1

    print(ans)
