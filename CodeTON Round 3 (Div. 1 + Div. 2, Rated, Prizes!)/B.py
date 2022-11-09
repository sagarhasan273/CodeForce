for i in range(int(input())):
    n=int(input())
    s=input()
    ans=max(s.count('0')*s.count('1'),1)
    c=1
    s=s.strip()
    for j in range(1,n):
        if s[j]==s[j-1]:
            c+=1
        else:
            c=1
        ans=max(ans,c*c)
    print(ans)
