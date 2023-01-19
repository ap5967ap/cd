# Python code to sort the lists using the second element of sublists
# Inplace way to sort, use of third variable
def Sort(sub_li):
	l = len(sub_li)
	for i in range(0, l):
		for j in range(0, l-i-1):
			if (sub_li[j][1] < sub_li[j + 1][1]):
				tempo = sub_li[j]
				sub_li[j]= sub_li[j + 1]
				sub_li[j + 1]= tempo
	return sub_li

# Driver Code
# sub_li))

t=int(input())
while(t>0):
    n=int(input())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    c=[]
    for i in range(len(a)):
        c.append([])
        c[i].extend([b[i],a[i]])

    maxa=0
    Sort(c)
    x=[]
    a=c[0][0]
    for i in range(len(c)):
        if(a==c[i][0]):
            x.append(c[i])
    print(x)
    t=t-1