t=int(input())
while(t>0):
    n=int(input())
    l=list(map(int,input().split()))
    asd=[]
    for i in l:
        if(i<0):
            i=i*-1
        asd.append(i)
    x=min(asd)
    if(x<0):
        print(-1)
    else:
        print(x-1)
    t-=1