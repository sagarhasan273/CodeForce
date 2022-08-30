for _ in range(int(input())):
    n = int(input())
    str1 = list(map(str, input().split()))
    str2 = list(map(str, input().split()))
    str3 = list(map(str, input().split()))

    person1 = person2 = person3 = 0

    hashMap = {}
    for s in str1:
        if s not in hashMap:
            hashMap[s] = 0
        hashMap[s] += 1
    
    for s in str2:
        if s not in hashMap:
            hashMap[s] = 0
        hashMap[s] += 1
    
    for s in str3:
        if s not in hashMap:
            hashMap[s] = 0
        hashMap[s] += 1
    
    for s in str2:
        if hashMap[s] == 1:
            person2 += 3
        elif hashMap[s] == 2:
            person2 += 1
        else:
            person2 += 0
    for s in str3:
        if hashMap[s] == 1:
            person3 += 3
        elif hashMap[s] == 2:
            person3 += 1
        else:
            person3 += 0

    for s in str1:
        if hashMap[s] == 1:
            person1 += 3
        elif hashMap[s] == 2:
            person1 += 1
        else:
            person1 += 0
        
    
    print(person1, person2, person3)
        