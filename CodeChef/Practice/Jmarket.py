t=int(input())
while(t>0):
    d=input().split()
    x=int(d[0])
    a=int(d[1])
    b=int(d[2])
    c=int(d[3])
    mx=max(a,b,c)
    mn=min(a,b,c)
    md=a+b+c-mx-mn
    print(mn*(x-1)+md)