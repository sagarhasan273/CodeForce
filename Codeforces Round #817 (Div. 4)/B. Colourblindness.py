for _ in range(int(input())):
    n = int(input())
    string1 = [s for s in input()]
    string2 = [s for s in input()]
    flag = True

    for i in range(n):
        if string1[i] == "G":
            string1[i] = "B"
        
        if string2[i] == "G":
            string2[i] = "B"
        
        if string1[i] != string2[i]:
            flag = False
            break
    
    if flag:
        print("Yes")
    else:
        print("No")
    

