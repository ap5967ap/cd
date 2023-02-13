import pandas as pd
t=int(input())
for i in range(t):
    n=int(input())
    s=input()
    lst=[]
    l=list(s)
    x=pd.value_counts(l)
    lis=list(x)
    nodd=0
    for i in lis:
        if (i%2==0):
            nodd=1
    if (nodd ==0):
        print(-1)
    elif (n==2 and nodd ==1):
        print(0)
    else:
        print(n-2)